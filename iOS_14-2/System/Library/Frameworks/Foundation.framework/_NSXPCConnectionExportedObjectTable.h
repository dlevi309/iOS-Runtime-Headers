/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(void)dealloc;
@end

