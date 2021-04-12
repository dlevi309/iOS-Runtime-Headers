/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKLayoutRule.h>

@interface NTKComplicationLayoutRule : NTKLayoutRule {

	UIEdgeInsets _keylinePadding;

}

@property (nonatomic,readonly) UIEdgeInsets keylinePadding;              //@synthesize keylinePadding=_keylinePadding - In the implementation block
+(id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(UIEdgeInsets)arg5 ;
+(id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(UIEdgeInsets)arg5 clip:(BOOL)arg6 transform:(CGAffineTransform)arg7 ;
+(id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(UIEdgeInsets)arg5 clip:(BOOL)arg6 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIEdgeInsets)keylinePadding;
@end

