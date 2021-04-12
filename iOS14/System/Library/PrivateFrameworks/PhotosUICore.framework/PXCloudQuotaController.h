/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/ICQBannerViewDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@protocol PXCloudQuotaControllerDelegate;
@class PXCloudQuotaOfferProvider, UIView, NSString;

@interface PXCloudQuotaController : NSObject <PXChangeObserver, ICQBannerViewDelegate, PXSettingsKeyObserver> {

	PXCloudQuotaOfferProvider* _offerProvider;
	UIView* _informationBanner;
	id<PXCloudQuotaControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * informationBanner;                                    //@synthesize informationBanner=_informationBanner - In the implementation block
@property (assign,nonatomic,__weak) id<PXCloudQuotaControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)setInformationBanner:(UIView *)arg1 ;
-(id<PXCloudQuotaControllerDelegate>)delegate;
-(long long)_mockOfferLevel;
-(UIView *)informationBanner;
-(void)setDelegate:(id<PXCloudQuotaControllerDelegate>)arg1 ;
-(id)presentingViewControllerForBannerView:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)_mockOfferIncludeAssetCounts;
-(void)_updateInformationBanner;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

