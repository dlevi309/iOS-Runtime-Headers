/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/


#import <LiveFS/LiveFS-Structs.h>
@interface LiveFSXattrCacheEntry : NSObject {

	void* _xattrBytes;
	unsigned long long _xattrSize;
	timespec _addedTime;
	timespec _lastUsedTime;

}

@property (readonly) void* xattrBytes;                          //@synthesize xattrBytes=_xattrBytes - In the implementation block
@property (readonly) unsigned long long xattrSize;              //@synthesize xattrSize=_xattrSize - In the implementation block
@property (readonly) timespec addedTime;                        //@synthesize addedTime=_addedTime - In the implementation block
@property (assign) timespec lastUsedTime;                       //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
-(timespec)lastUsedTime;
-(void)setLastUsedTime:(timespec)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 andTime:(const timespec*)arg2 ;
-(BOOL)isExpiredAsOf:(const timespec*)arg1 forLifetime:(unsigned long long)arg2 ;
-(void*)xattrBytes;
-(unsigned long long)xattrSize;
-(timespec)addedTime;
@end

