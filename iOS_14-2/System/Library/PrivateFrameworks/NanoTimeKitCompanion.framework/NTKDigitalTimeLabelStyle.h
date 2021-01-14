/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <ClockKitUI/CLKUITimeLabelStyle.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTKLayoutRule;

@interface NTKDigitalTimeLabelStyle : CLKUITimeLabelStyle <NSCopying> {

	NTKLayoutRule* _layoutRule;

}

@property (nonatomic,retain) NTKLayoutRule * layoutRule;              //@synthesize layoutRule=_layoutRule - In the implementation block
+(id)defaultStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 withBaselineY:(double)arg4 withFont:(id)arg5 forDevice:(id)arg6 ;
+(id)smallInUpperRightCornerStyleForBounds:(CGRect)arg1 withBaselineY:(double)arg2 withFont:(id)arg3 forDevice:(id)arg4 ;
+(id)defaultStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 font:(id)arg4 forDevice:(id)arg5 ;
+(id)defaultStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 forDevice:(id)arg4 ;
+(id)defaultStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 withBaselineY:(double)arg4 forDevice:(id)arg5 ;
+(id)smallInUpperRightCornerStyleForBounds:(CGRect)arg1 withFont:(id)arg2 forDevice:(id)arg3 ;
+(id)smallInUpperRightCornerStyleForBounds:(CGRect)arg1 weight:(double)arg2 forDevice:(id)arg3 ;
+(id)defaultRoundedStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 forDevice:(id)arg4 ;
+(id)smallInUpperRightCornerStyleForBounds:(CGRect)arg1 forDevice:(id)arg2 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NTKLayoutRule *)layoutRule;
-(void)setLayoutRule:(NTKLayoutRule *)arg1 ;
@end

