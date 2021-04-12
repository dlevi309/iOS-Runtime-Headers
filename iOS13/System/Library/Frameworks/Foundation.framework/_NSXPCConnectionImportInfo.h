/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCConnectionImportInfo : NSObject {

	unsigned long long _generationCount;
	CFDictionaryRef _proxyNumberToCount;
	void* _secTaskRef;
	os_unfair_lock_s _lock;
	BOOL _secTaskClearedOnce;

}
-(id)init;
-(void)dealloc;
-(void)_clearEntitlementCache;
-(id)_valueForEntitlement:(id)arg1 auditToken:(SCD_Struct_NS0)arg2 ;
-(void)addProxy:(id)arg1 ;
-(BOOL)removeProxy:(id)arg1 ;
@end

