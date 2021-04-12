/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>

@class ICQOffer;

@interface PXCloudQuotaOfferProvider : PXObservable {

	BOOL _offerHasAssetCounts;
	ICQOffer* _offer;

}

@property (nonatomic,readonly) ICQOffer * offer;                      //@synthesize offer=_offer - In the implementation block
@property (nonatomic,readonly) BOOL offerHasAssetCounts;              //@synthesize offerHasAssetCounts=_offerHasAssetCounts - In the implementation block
+(id)currentOfferProvider;
-(id)init;
-(void)_currentOfferChangedNotification:(id)arg1 ;
-(void)_queue_initialSetup;
-(void)_updateCurrentOffer:(id)arg1 ;
-(void)setOffer:(ICQOffer *)arg1 ;
-(void)_queue_getCurrentOffer;
-(BOOL)offerHasAssetCounts;
-(void)performChanges:(/*^block*/id)arg1 ;
-(ICQOffer *)offer;
-(void)setOfferHasAssetCounts:(BOOL)arg1 ;
-(void)dealloc;
@end

