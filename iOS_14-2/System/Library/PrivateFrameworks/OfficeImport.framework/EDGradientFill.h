/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)stops;
-(void)setType:(int)arg1 ;
-(double)degree;
-(int)type;
-(unsigned long long)hash;
-(void)setStops:(id)arg1 ;
-(BOOL)isEmpty;
-(id)initWithResources:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDegree:(double)arg1 ;
-(void)setStopColor:(id)arg1 atPosition:(id)arg2 ;
-(BOOL)isEqualToGradientFill:(id)arg1 ;
-(CGRect)focusRect;
-(id)colorForStopAtPosition:(id)arg1 ;
-(void)setFocusRect:(CGRect)arg1 ;
-(id)initWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8 ;
-(id)initWithType:(int)arg1 degree:(double)arg2 focusRect:(CGRect)arg3 stops:(id)arg4 resources:(id)arg5 ;
@end

