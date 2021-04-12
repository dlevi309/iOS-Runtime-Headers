/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <libobjc.A.dylib/NUJSRationalExport.h>

@interface NUJSRational : NSObject <NUJSRationalExport> {

	long long _numerator;
	long long _denominator;

}

@property (assign) long long numerator; 
@property (assign) long long denominator; 
-(id)init;
-(double)toDouble;
-(long long)numerator;
-(long long)denominator;
-(void)setNumerator:(long long)arg1 ;
-(void)setDenominator:(long long)arg1 ;
-(id)initWithNumerator:(long long)arg1 denominator:(long long)arg2 ;
@end

