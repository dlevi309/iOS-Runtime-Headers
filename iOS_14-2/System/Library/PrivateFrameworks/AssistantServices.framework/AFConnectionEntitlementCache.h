/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

