/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSDictionary, NSXPCStoreServerPerConnectionCache;

@interface NSXPCStoreConnectionInfo : NSObject {

	NSDictionary* _entitlements;
	NSXPCStoreServerPerConnectionCache* _cache;
	SCD_Struct_NS5 _token;
	id _userInfo;
	int _lock;

}
-(void)dealloc;
-(id)description;
-(id)userInfo;
-(SCD_Struct_NS5)auditToken;
-(void)setUserInfo:(id)arg1 ;
-(id)entitlements;
-(id)cache;
-(id)persistentStoreCoordinator;
-(id)initForToken:(SCD_Struct_NS5)arg1 entitlementNames:(id)arg2 cache:(id)arg3 ;
@end

