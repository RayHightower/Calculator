//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Raymond T. Hightower on 11/3/11.
//  Copyright (c) 2011 WisdomGroup. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CalculatorBrain.h"

@interface CalculatorBrain : NSObject   {
    IBOutlet UILabel *display;
    CalculatorBrain *brain;
    
}

- (IBAction)digitPressed:(UIButton *)sender;
- (IBAction)operationPressed:(UIButton *)sender;

@end
