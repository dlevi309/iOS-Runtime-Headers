/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPeerPaymentContactResolverDelegate.h>

@class PKStackedTextItemGroup, PKStackedTextItemGroupView, UIView, UIImageView, PKContinuousButton, PKPaymentPassAction, PKPaymentPass, PKPaymentTransaction, PKTransitBalanceModel, NSArray, PKPeerPaymentContactResolver, NSString;

@interface PKFooterTransactionView : UIView <PKPeerPaymentContactResolverDelegate> {

	PKStackedTextItemGroup* _displayItem;
	PKStackedTextItemGroupView* _headerView;
	PKStackedTextItemGroupView* _contentView;
	UIView* _separatorView;
	PKStackedTextItemGroupView* _footerView;
	UIImageView* _disclosureView;
	PKContinuousButton* _actionButton;
	PKPaymentPassAction* _action;
	UIImageView* _imageView;
	BOOL _animated;
	unsigned long long _deferUpdateCounter;
	BOOL _needsContentUpdate;
	BOOL _contentRequiresDisclosure;
	BOOL _disableCommutePlanDisplay;
	BOOL _enableDisclosure;
	PKPaymentPass* _pass;
	PKPaymentTransaction* _transaction;
	PKTransitBalanceModel* _transitBalanceModel;
	NSArray* _transitCommutePlans;
	PKPeerPaymentContactResolver* _peerPaymentContactResolver;
	NSString* _requiredActionPropertyIdentifier;
	/*^block*/id _actionHandler;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPaymentTransaction * transaction;                                     //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,copy) PKTransitBalanceModel * transitBalanceModel;                                //@synthesize transitBalanceModel=_transitBalanceModel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * transitCommutePlans;                                     //@synthesize transitCommutePlans=_transitCommutePlans - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentContactResolver * peerPaymentContactResolver;              //@synthesize peerPaymentContactResolver=_peerPaymentContactResolver - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
@property (assign,nonatomic) BOOL disableCommutePlanDisplay;                                           //@synthesize disableCommutePlanDisplay=_disableCommutePlanDisplay - In the implementation block
@property (assign,nonatomic) BOOL enableDisclosure;                                                    //@synthesize enableDisclosure=_enableDisclosure - In the implementation block
@property (nonatomic,readonly) BOOL contentRequiresDisclosure;                                         //@synthesize contentRequiresDisclosure=_contentRequiresDisclosure - In the implementation block
@property (nonatomic,retain) NSString * requiredActionPropertyIdentifier;                              //@synthesize requiredActionPropertyIdentifier=_requiredActionPropertyIdentifier - In the implementation block
@property (nonatomic,copy) id actionHandler;                                                           //@synthesize actionHandler=_actionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentTransaction *)transaction;
-(id)_image;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)hasContent;
-(void)beginUpdates;
-(void)_actionButtonTapped:(id)arg1 ;
-(id)_statusText;
-(id)_locationText;
-(PKPaymentPass *)pass;
-(NSArray *)transitCommutePlans;
-(void)contactsDidChangeForContactResolver:(id)arg1 ;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(BOOL)enableDisclosure;
-(void)endUpdates:(BOOL)arg1 ;
-(void)setEnableDisclosure:(BOOL)arg1 ;
-(PKTransitBalanceModel *)transitBalanceModel;
-(void)setTransitBalanceModel:(PKTransitBalanceModel *)arg1 ;
-(void)_updateContentAnimated:(BOOL)arg1 ;
-(id)_merchantText;
-(id)_relativeDateText;
-(id)_peerPaymentCounterpart;
-(BOOL)_strikethroughAmount;
-(BOOL)_deemphasizeAmount;
-(id)initWithFrame:(CGRect)arg1 peerPaymentContactResolver:(id)arg2 ;
-(id)_firstRenewActionForPass:(id)arg1 ;
-(void)setPass:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTransaction:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTransitBalanceModel:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTransitCommutePlans:(id)arg1 animated:(BOOL)arg2 ;
-(PKPeerPaymentContactResolver *)peerPaymentContactResolver;
-(BOOL)disableCommutePlanDisplay;
-(void)setDisableCommutePlanDisplay:(BOOL)arg1 ;
-(BOOL)contentRequiresDisclosure;
-(NSString *)requiredActionPropertyIdentifier;
-(void)setRequiredActionPropertyIdentifier:(NSString *)arg1 ;
@end

