/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKCFGTerminal.h>

@class NSCharacterSet;

@interface _HKCFGCharacterTerminal : _HKCFGTerminal {

	NSCharacterSet* _characterSet;

}

@property (nonatomic,copy) NSCharacterSet * characterSet;              //@synthesize characterSet=_characterSet - In the implementation block
-(id)_label;
-(NSCharacterSet *)characterSet;
-(unsigned long long)_minimumLength;
-(void)setCharacterSet:(NSCharacterSet *)arg1 ;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
@end

