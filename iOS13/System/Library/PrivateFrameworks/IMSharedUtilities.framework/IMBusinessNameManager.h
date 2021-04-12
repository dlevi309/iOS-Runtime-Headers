/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSLock, NSMutableDictionary;

@interface IMBusinessNameManager : NSObject {

	NSLock* _cacheLock;
	NSMutableDictionary* _cache;
	NSMutableDictionary* _pendingRequests;

}

@property (retain) NSLock * cacheLock;                                 //@synthesize cacheLock=_cacheLock - In the implementation block
@property (retain) NSMutableDictionary * cache;                        //@synthesize cache=_cache - In the implementation block
@property (retain) NSMutableDictionary * pendingRequests;              //@synthesize pendingRequests=_pendingRequests - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cache;
-(NSLock *)cacheLock;
-(NSMutableDictionary *)pendingRequests;
-(id)businessNameForUID:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)setCacheLock:(NSLock *)arg1 ;
-(void)setPendingRequests:(NSMutableDictionary *)arg1 ;
@end

