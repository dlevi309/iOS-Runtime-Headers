/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@interface BLHLSKeyFetcher : NSObject {

	BOOL _ignoreCache;

}

@property (assign,nonatomic) BOOL ignoreCache;              //@synthesize ignoreCache=_ignoreCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)ignoreCache;
-(id)fetchOnlineKeyForMediaItem:(id)arg1 loadingRequest:(id)arg2 ;
-(id)fetchOfflineKeyForMediaItem:(id)arg1 identity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIgnoreCache:(BOOL)arg1 ;
@end

