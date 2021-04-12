/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSMutableArray, NSMutableDictionary;

@interface _MultiplatformDonationRecencyStore : NSObject {

	NSMutableArray* _appDateInfo;
	NSMutableDictionary* _infoByLocalID;
	NSMutableDictionary* _infoByRemoteID;

}
-(id)init;
-(void)updateDataWithRemoteBundleIdentifier:(id)arg1 remoteDate:(id)arg2 localBundleIdentifier:(id)arg3 localDate:(id)arg4 ;
-(id)bundlesFromMostRecentlyProvidingPlatforms;
@end

