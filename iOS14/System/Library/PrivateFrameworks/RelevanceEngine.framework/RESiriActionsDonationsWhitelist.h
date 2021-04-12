/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSDictionary, NSSet;

@interface RESiriActionsDonationsWhitelist : NSObject {

	NSDictionary* _whitelist;
	os_unfair_lock_s _lock;
	NSSet* _intentWhitelistBundleIDs;
	NSSet* _userActivityWhitelistBundleIDs;

}

@property (nonatomic,readonly) NSSet * intentWhitelistBundleIDs;                    //@synthesize intentWhitelistBundleIDs=_intentWhitelistBundleIDs - In the implementation block
@property (nonatomic,readonly) NSSet * userActivityWhitelistBundleIDs;              //@synthesize userActivityWhitelistBundleIDs=_userActivityWhitelistBundleIDs - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSSet *)userActivityWhitelistBundleIDs;
-(id)userActivityWhitelistedRelevanceThresholdForBundleID:(id)arg1 andActivityType:(id)arg2 ;
-(id)intentWhitelistedRelevanceThresholdForBundleID:(id)arg1 andTypeName:(id)arg2 ;
-(NSSet *)intentWhitelistBundleIDs;
-(BOOL)intentIsWhitelistedForBundleID:(id)arg1 andTypeName:(id)arg2 ;
-(BOOL)userActivityIsWhitelistedForBundleID:(id)arg1 andActivityType:(id)arg2 ;
@end

