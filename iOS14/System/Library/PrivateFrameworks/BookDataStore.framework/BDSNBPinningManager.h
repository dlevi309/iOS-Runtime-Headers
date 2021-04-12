/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


@class BDSServiceProxy;

@interface BDSNBPinningManager : NSObject {

	BDSServiceProxy* _serviceProxy;

}

@property (nonatomic,retain) BDSServiceProxy * serviceProxy;              //@synthesize serviceProxy=_serviceProxy - In the implementation block
-(id)init;
-(void)setServiceProxy:(BDSServiceProxy *)arg1 ;
-(BDSServiceProxy *)serviceProxy;
-(void)fetchMostRecentAudiobookWithCompletion:(/*^block*/id)arg1 ;
-(id)updateWantToReadAndReadingNowWithJaliscoUpdateSuccessful:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)updateWantToReadWithCompletion:(/*^block*/id)arg1 ;
-(id)updateReadingNowWithCompletion:(/*^block*/id)arg1 ;
-(void)updateBitrateForItemWithAdamID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)audiobookStoreEnabledWithCompletion:(/*^block*/id)arg1 ;
@end

