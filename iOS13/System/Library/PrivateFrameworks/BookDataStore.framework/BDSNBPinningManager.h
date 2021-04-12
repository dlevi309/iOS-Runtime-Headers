/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


@class BDSServiceProxy;

@interface BDSNBPinningManager : NSObject {

	BDSServiceProxy* _serviceProxy;

}

@property (nonatomic,retain) BDSServiceProxy * serviceProxy;              //@synthesize serviceProxy=_serviceProxy - In the implementation block
-(id)init;
-(BDSServiceProxy *)serviceProxy;
-(void)setServiceProxy:(BDSServiceProxy *)arg1 ;
-(void)fetchMostRecentAudiobookWithCompletion:(/*^block*/id)arg1 ;
-(id)updateWantToReadAndReadingNowWithCompletion:(/*^block*/id)arg1 ;
-(id)updateWantToReadWithCompletion:(/*^block*/id)arg1 ;
-(id)updateReadingNowWithCompletion:(/*^block*/id)arg1 ;
-(void)updateBitrateForItemWithAdamID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)audiobookStoreEnabledWithCompletion:(/*^block*/id)arg1 ;
@end

