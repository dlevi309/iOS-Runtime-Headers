/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSDictionary;

@interface PPLabelMatcher : NSObject {

	NSDictionary* _map;

}
+(id)sharedInstance;
-(id)init;
-(unsigned long long)matchFromLabel:(id)arg1 toLabel:(id)arg2 ;
-(id)_generateMap;
@end

