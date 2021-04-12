/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@interface BLHLSKeyFetcher : NSObject {

	BOOL _ignoreCache;

}

@property (assign,nonatomic) BOOL ignoreCache;              //@synthesize ignoreCache=_ignoreCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)ignoreCache;
-(void)setIgnoreCache:(BOOL)arg1 ;
-(id)fetchOnlineKeyForMediaItem:(id)arg1 loadingRequest:(id)arg2 ;
-(id)fetchOfflineKeyForMediaItem:(id)arg1 identity:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

