/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICardKitProviderSupport.framework/SiriUICardKitProviderSupport
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CRKCardSectionViewControlling.h>

@protocol CRKCardSectionViewControllingDelegate;
@class AFSecurityConnection, UIViewController, SFMediaRemoteControlCardSection, SCKPMediaControlCardSectionView, NSString;

@interface SCKPMediaControlCardSectionViewController : UIViewController <CRKCardSectionViewControlling> {

	AFSecurityConnection* _assistantSecurityConnection;
	UIViewController* _mediaPlatterViewController;
	id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;
	SFMediaRemoteControlCardSection* _cardSection;

}

@property (readonly) SFMediaRemoteControlCardSection * cardSection;                                                            //@synthesize cardSection=_cardSection - In the implementation block
@property (readonly) SCKPMediaControlCardSectionView * view; 
@property (assign,nonatomic,__weak) id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(SFMediaRemoteControlCardSection *)cardSection;
-(void)setCardSectionViewControllingDelegate:(id<CRKCardSectionViewControllingDelegate>)arg1 ;
-(id<CRKCardSectionViewControllingDelegate>)cardSectionViewControllingDelegate;
-(id)initWithMediaRemoteControlCardSection:(id)arg1 ;
-(void)_updatePlatterForHashedRouteUID:(id)arg1 ;
-(void)_updatePlatterForRouteUID:(id)arg1 ;
-(id)_nowPlayingViewControllerWithRouteUID:(id)arg1 ;
-(void)_updateActiveSystemEndpointForRouteUID:(id)arg1 ;
@end

