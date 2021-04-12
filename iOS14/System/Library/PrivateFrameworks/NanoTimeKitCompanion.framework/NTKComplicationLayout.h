/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSMutableArray;

@interface NTKComplicationLayout : NSObject {

	NSMutableArray* _stateLayouts;

}
+(id)layoutWithDefaultRule:(id)arg1 ;
-(id)init;
-(void)setDefaultLayoutRule:(id)arg1 forState:(long long)arg2 ;
-(void)setOverrideLayoutRule:(id)arg1 forState:(long long)arg2 layoutOverride:(long long)arg3 ;
-(id)defaultLayoutRuleForState:(long long)arg1 ;
-(id)_layoutForState:(long long)arg1 ;
-(id)layoutRuleForComplicationState:(long long)arg1 layoutOverride:(long long)arg2 ;
@end

