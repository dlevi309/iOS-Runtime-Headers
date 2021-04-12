/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/


@class NSCache;

@interface IMDCoreSpotlightContactCache : NSObject {

	NSCache* _cache;

}

@property (nonatomic,retain) NSCache * cache;              //@synthesize cache=_cache - In the implementation block
+(id)sharedInstance;
+(id)contactsForVCardAtPath:(id)arg1 ;
+(id)vCardNameForContact:(id)arg1 ;
+(id)vCardMapURLForContact:(id)arg1 ;
+(void)vCardCoordinateForMapURL:(id)arg1 outLatitude:(float*)arg2 outLongitude:(float*)arg3 ;
+(void)updateAttributes:(id)arg1 withAddressFromContact:(id)arg2 ;
-(void)dealloc;
-(void)setCache:(NSCache *)arg1 ;
-(NSCache *)cache;
-(void)contactStoreDidChange:(id)arg1 ;
-(id)cachedContactForKey:(id)arg1 cacheHit:(BOOL*)arg2 ;
-(void)cacheContact:(id)arg1 forKey:(id)arg2 ;
@end

