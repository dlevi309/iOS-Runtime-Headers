/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)defaultStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 forDevice:(id)arg4 ;
+(id)defaultStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 withBaselineY:(double)arg4 forDevice:(id)arg5 ;
+(id)smallInUpperRightCornerStyleForBounds:(CGRect)arg1 withFont:(id)arg2 forDevice:(id)arg3 ;
+(id)smallInUpperRightCornerStyleForBounds:(CGRect)arg1 weight:(double)arg2 forDevice:(id)arg3 ;
+(id)defaultStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 font:(id)arg4 forDevice:(id)arg5 ;
+(id)defaultRoundedStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(BOOL)arg3 forDevice:(id)arg4 ;
+(id)smallInUpperRightCornerStyleForBounds:(CGRect)arg1 forDevice:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NTKLayoutRule *)layoutRule;
-(void)setLayoutRule:(NTKLayoutRule *)arg1 ;
@end

