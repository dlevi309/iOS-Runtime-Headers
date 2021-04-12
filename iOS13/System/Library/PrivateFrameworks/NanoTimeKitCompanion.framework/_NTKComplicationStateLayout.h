/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSMutableDictionary, NTKComplicationLayoutRule;

@interface _NTKComplicationStateLayout : NSObject {

	NSMutableDictionary* _overrideRules;
	NTKComplicationLayoutRule* _defaultRule;

}

@property (nonatomic,retain) NTKComplicationLayoutRule * defaultRule;              //@synthesize defaultRule=_defaultRule - In the implementation block
-(void)dealloc;
-(void)setDefaultRule:(NTKComplicationLayoutRule *)arg1 ;
-(void)setRule:(id)arg1 forLayoutOverride:(long long)arg2 ;
-(id)ruleForLayoutOverride:(long long)arg1 ;
-(NTKComplicationLayoutRule *)defaultRule;
@end

