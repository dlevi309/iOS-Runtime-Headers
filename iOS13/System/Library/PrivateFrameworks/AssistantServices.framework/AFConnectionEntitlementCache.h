/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class NSMutableDictionary;

@interface AFConnectionEntitlementCache : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _bundleIDToPIDMap;

}
+(id)sharedCache;
-(id)init;
-(BOOL)hasEntitlement:(id)arg1 forPID:(int)arg2 ;
-(void)cacheEntitlement:(id)arg1 forPID:(int)arg2 bundleID:(id)arg3 ;
@end

