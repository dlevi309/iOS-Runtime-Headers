/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableDictionary *)pendingRequests;
-(NSMutableDictionary *)cache;
-(id)init;
-(void)setPendingRequests:(NSMutableDictionary *)arg1 ;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSLock *)cacheLock;
-(void)setCacheLock:(NSLock *)arg1 ;
-(id)businessNameForUID:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
@end

