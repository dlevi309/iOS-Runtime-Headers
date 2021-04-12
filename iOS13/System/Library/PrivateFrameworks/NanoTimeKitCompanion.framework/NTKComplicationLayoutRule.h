/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)keylinePadding;
@end

