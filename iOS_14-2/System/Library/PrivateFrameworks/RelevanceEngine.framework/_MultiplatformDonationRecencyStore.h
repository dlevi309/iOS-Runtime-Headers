/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

