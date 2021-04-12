/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCInterfaceInfo : NSObject {

	unsigned long long _remoteVersion;
	os_unfair_lock_s _knownSelectorsLock;
	CFDictionaryRef _knownSelectors;
	CFDictionaryRef _methodInfo;
	Class _xpcDOSubclass;

}

@property (assign) unsigned long long remoteVersion;              //@synthesize remoteVersion=_remoteVersion - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)remoteVersion;
-(void)setRemoteVersion:(unsigned long long)arg1 ;
@end

