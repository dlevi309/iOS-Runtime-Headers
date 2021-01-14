/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSDictionary, NSXPCStoreServerPerConnectionCache;

@interface NSXPCStoreConnectionInfo : NSObject {

	NSDictionary* _entitlements;
	NSXPCStoreServerPerConnectionCache* _cache;
	SCD_Struct_NS6 _token;
	id _userInfo;
	os_unfair_lock_s _lock;

}
-(id)entitlements;
-(void)setUserInfo:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(id)userInfo;
-(id)cache;
-(SCD_Struct_NS6)auditToken;
-(id)description;
-(id)initForToken:(SCD_Struct_NS6)arg1 entitlementNames:(id)arg2 cache:(id)arg3 ;
-(void)dealloc;
@end

