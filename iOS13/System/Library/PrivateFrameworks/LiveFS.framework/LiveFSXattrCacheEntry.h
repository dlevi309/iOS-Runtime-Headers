/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/


#import <LiveFS/LiveFS-Structs.h>
@class NSData;

@interface LiveFSXattrCacheEntry : NSObject {

	NSData* _xattrData;
	timespec _addedTime;
	timespec _lastUsedTime;

}

@property (readonly) NSData * xattrData;               //@synthesize xattrData=_xattrData - In the implementation block
@property (readonly) timespec addedTime;               //@synthesize addedTime=_addedTime - In the implementation block
@property (assign) timespec lastUsedTime;              //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
-(timespec)lastUsedTime;
-(void)setLastUsedTime:(timespec)arg1 ;
-(id)initWithData:(id)arg1 andTime:(const timespec*)arg2 ;
-(BOOL)isExpiredAsOf:(const timespec*)arg1 forLifetime:(unsigned long long)arg2 ;
-(NSData *)xattrData;
-(timespec)addedTime;
@end

