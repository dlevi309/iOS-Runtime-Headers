/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDFill.h>

@class NSMutableDictionary;

@interface EDGradientFill : EDFill {

	int mType;
	NSMutableDictionary* mStops;
	double mDegree;
	CGRect mFocusRect;

}
+(id)gradientWithType:(int)arg1 degree:(double)arg2 focusRect:(CGRect)arg3 stops:(id)arg4 resources:(id)arg5 ;
+(id)gradientWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)stops;
-(void)setStops:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setStopColor:(id)arg1 atPosition:(id)arg2 ;
-(BOOL)isEqualToGradientFill:(id)arg1 ;
-(double)degree;
-(CGRect)focusRect;
-(id)colorForStopAtPosition:(id)arg1 ;
-(void)setFocusRect:(CGRect)arg1 ;
-(void)setDegree:(double)arg1 ;
-(id)initWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8 ;
-(id)initWithType:(int)arg1 degree:(double)arg2 focusRect:(CGRect)arg3 stops:(id)arg4 resources:(id)arg5 ;
@end

