/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKCFGTerminal.h>

@class NSCharacterSet;

@interface _HKCFGCharacterTerminal : _HKCFGTerminal {

	NSCharacterSet* _characterSet;

}

@property (nonatomic,copy) NSCharacterSet * characterSet;              //@synthesize characterSet=_characterSet - In the implementation block
-(id)_label;
-(unsigned long long)_minimumLength;
-(NSCharacterSet *)characterSet;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
-(void)setCharacterSet:(NSCharacterSet *)arg1 ;
@end

