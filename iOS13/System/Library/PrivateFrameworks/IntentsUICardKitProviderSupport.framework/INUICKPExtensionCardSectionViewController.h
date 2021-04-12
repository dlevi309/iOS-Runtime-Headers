/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
*/

#import <IntentsUICardKitProviderSupport/INUICKPSynchronousRemoteViewController.h>
#import <libobjc.A.dylib/CRKCardSectionViewControlling.h>

@protocol CRKCardSectionViewControllingDelegate;
@class NSString;

@interface INUICKPExtensionCardSectionViewController : INUICKPSynchronousRemoteViewController <CRKCardSectionViewControlling> {

	id _touchDeliveryPolicyAssertion;
	id<CRKCardSectionViewControllingDelegate> _cardSectionViewControllingDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;              //@synthesize cardSectionViewControllingDelegate=_cardSectionViewControllingDelegate - In the implementation block
-(void)desiresInteractivity:(/*^block*/id)arg1 ;
-(void)remoteViewControllerWillBeginEditing:(id)arg1 ;
-(void)remoteViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2 ;
-(void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)setCardSectionViewControllingDelegate:(id<CRKCardSectionViewControllingDelegate>)arg1 ;
-(id<CRKCardSectionViewControllingDelegate>)cardSectionViewControllingDelegate;
@end

