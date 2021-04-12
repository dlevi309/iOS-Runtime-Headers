/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSMutableDictionary, NTKComplicationLayoutRule;

@interface _NTKComplicationStateLayout : NSObject {

	NSMutableDictionary* _overrideRules;
	NTKComplicationLayoutRule* _defaultRule;

}

@property (nonatomic,retain) NTKComplicationLayoutRule * defaultRule;              //@synthesize defaultRule=_defaultRule - In the implementation block
-(void)setDefaultRule:(NTKComplicationLayoutRule *)arg1 ;
-(void)setRule:(id)arg1 forLayoutOverride:(long long)arg2 ;
-(id)ruleForLayoutOverride:(long long)arg1 ;
-(NTKComplicationLayoutRule *)defaultRule;
@end

