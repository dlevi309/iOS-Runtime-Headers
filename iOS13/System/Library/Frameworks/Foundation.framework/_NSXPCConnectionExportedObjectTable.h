/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol OS_dispatch_group;
#import <Foundation/Foundation-Structs.h>
@class _NSXPCConnectionExportInfo, NSObject;

@interface _NSXPCConnectionExportedObjectTable : NSObject {

	opaque_pthread_mutex_t _lock;
	_NSXPCConnectionExportInfo* _proxy1;
	CFDictionaryRef _proxyNumberToObject;
	CFDictionaryRef _objectToProxyNumber;
	unsigned long long _next;
	BOOL _valid;
	NSObject*<OS_dispatch_group> _replyGroup;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)exportedObjectForProxyNumber:(unsigned long long)arg1 ;
-(id)interfaceForProxyNumber:(unsigned long long)arg1 ;
-(void)incrementOutstandingReplyCount;
-(void)decrementOutstandingReplyCount;
-(void)setExportedObject:(id)arg1 forProxyNumber:(unsigned long long)arg2 ;
-(void)setInterface:(id)arg1 forProxyNumber:(unsigned long long)arg2 ;
-(void)receivedReleaseForProxyNumber:(unsigned long long)arg1 userQueue:(id)arg2 ;
-(void)releaseExportedObject:(unsigned long long)arg1 ;
-(unsigned long long)proxyNumberForExportedObject:(id)arg1 interface:(id)arg2 ;
@end

