/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/


#import <LiveFS/LiveFS-Structs.h>
@class NSMutableDictionary;

@interface LiveFSXattrCache : NSObject {

	NSMutableDictionary* _cacheEntries;
	unsigned long long _entryCount;
	unsigned long long _maxItems;
	unsigned long long _maxItemSize;
	unsigned long long _entryLifetime;
	BOOL _noXattrsPresent;
	timespec _noXattrsPresentSetTime;

}

@property (assign) BOOL noXattrsPresent; 
+(id)xattrCacheWithMaxItems:(unsigned long long)arg1 andMaxItemSize:(unsigned long long)arg2 ;
+(id)xattrCacheWithMaxItems:(unsigned long long)arg1 maxItemSize:(unsigned long long)arg2 andEntryLifetimeInSeconds:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)initWithMaxItems:(unsigned long long)arg1 andMaxItemSize:(unsigned long long)arg2 ;
-(id)initWithMaxItems:(unsigned long long)arg1 maxItemSize:(unsigned long long)arg2 andEntryLifetimeInSeconds:(unsigned long long)arg3 ;
-(void)insertEntryForData:(id)arg1 forName:(id)arg2 ;
-(BOOL)noXattrsPresent;
-(void)setData:(id)arg1 forName:(id)arg2 ;
-(void)setNegativeForName:(id)arg1 ;
-(id)dataForName:(id)arg1 wasNegative:(BOOL*)arg2 ;
-(void)setNoXattrsPresent:(BOOL)arg1 ;
@end

