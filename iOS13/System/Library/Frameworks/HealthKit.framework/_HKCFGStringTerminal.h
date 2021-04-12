/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKCFGTerminal.h>

@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal {

	BOOL _caseSensitive;
	NSString* _string;

}

@property (nonatomic,copy) NSString * string;                 //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) BOOL caseSensitive;              //@synthesize caseSensitive=_caseSensitive - In the implementation block
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(BOOL)caseSensitive;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(id)_label;
-(id)characterSet;
-(unsigned long long)_minimumLength;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
@end

