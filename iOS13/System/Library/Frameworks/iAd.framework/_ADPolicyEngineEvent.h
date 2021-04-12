/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <libobjc.A.dylib/ADBannerViewInternalDelegate.h>

@class NSMutableArray, NSArray, NSString;

@interface _ADPolicyEngineEvent : NSObject <ADBannerViewInternalDelegate> {

	/*^block*/id _bannersLoadedHandler;
	NSMutableArray* _banners;
	NSMutableArray* _bannersWaitingOnLoad;

}

@property (nonatomic,copy) id bannersLoadedHandler;                              //@synthesize bannersLoadedHandler=_bannersLoadedHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * banners;                           //@synthesize banners=_banners - In the implementation block
@property (nonatomic,retain) NSMutableArray * bannersWaitingOnLoad;              //@synthesize bannersWaitingOnLoad=_bannersWaitingOnLoad - In the implementation block
@property (nonatomic,readonly) NSArray * bannerIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSMutableArray *)banners;
-(void)setBanners:(NSMutableArray *)arg1 ;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)setBannersLoadedHandler:(id)arg1 ;
-(void)setBannersWaitingOnLoad:(NSMutableArray *)arg1 ;
-(NSMutableArray *)bannersWaitingOnLoad;
-(void)_considerCallingLoadedHandler;
-(id)bannersLoadedHandler;
-(void)addBannerForCreativeType:(int)arg1 ;
-(NSArray *)bannerIdentifiers;
-(id)loadedBannerWithIdentifier:(id)arg1 ;
-(void)waitForLoadsForBanners:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

