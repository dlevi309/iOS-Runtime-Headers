/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic,__weak) id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;              //@synthesize cardSectionViewControllingDelegate=_cardSectionViewControllingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)remoteViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2 ;
-(void)remoteViewControllerWillBeginEditing:(id)arg1 ;
-(void)desiresInteractivity:(/*^block*/id)arg1 ;
-(void)setCardSectionViewControllingDelegate:(id<CRKCardSectionViewControllingDelegate>)arg1 ;
-(id<CRKCardSectionViewControllingDelegate>)cardSectionViewControllingDelegate;
@end

