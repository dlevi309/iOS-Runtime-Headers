/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIRedeemResultsViewController.h>
#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>
#import <libobjc.A.dylib/SKUIRedeemResultsViewDelegate.h>

@class NSOperationQueue, UIButton, SKUITextLayout, SKUITextBoxView, UIImageView, UIImage, SKUIItemStateCenter, SKUIGiftItemView, SKUIRedeemResultMessageView, SKUIRedeemITunesPassLockup, NSString;

@interface SKUIRedeemNativeResultsViewController : SKUIRedeemResultsViewController <SKUIItemStateCenterObserver, SKUIRedeemResultsViewDelegate> {

	BOOL _extendedMessageIsExpanded;
	NSOperationQueue* _operationQueue;
	UIButton* _anotherButton;
	SKUITextLayout* _extendedMessageTextLayout;
	SKUITextBoxView* _extendedMessageView;
	UIImageView* _headerImageView;
	UIImage* _itemImage;
	SKUIItemStateCenter* _itemStateCenter;
	SKUIGiftItemView* _itemView;
	SKUIRedeemResultMessageView* _messageView;
	SKUIRedeemITunesPassLockup* _passbookLockup;
	unsigned long long _currentItemStateFlag;

}

@property (nonatomic,retain) UIButton * anotherButton;                                 //@synthesize anotherButton=_anotherButton - In the implementation block
@property (nonatomic,retain) SKUITextLayout * extendedMessageTextLayout;               //@synthesize extendedMessageTextLayout=_extendedMessageTextLayout - In the implementation block
@property (nonatomic,retain) SKUITextBoxView * extendedMessageView;                    //@synthesize extendedMessageView=_extendedMessageView - In the implementation block
@property (nonatomic,retain) UIImageView * headerImageView;                            //@synthesize headerImageView=_headerImageView - In the implementation block
@property (nonatomic,retain) UIImage * itemImage;                                      //@synthesize itemImage=_itemImage - In the implementation block
@property (nonatomic,retain) SKUIItemStateCenter * itemStateCenter;                    //@synthesize itemStateCenter=_itemStateCenter - In the implementation block
@property (nonatomic,retain) SKUIGiftItemView * itemView;                              //@synthesize itemView=_itemView - In the implementation block
@property (nonatomic,retain) SKUIRedeemResultMessageView * messageView;                //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) SKUIRedeemITunesPassLockup * passbookLockup;              //@synthesize passbookLockup=_passbookLockup - In the implementation block
@property (assign,nonatomic) unsigned long long currentItemStateFlag;                  //@synthesize currentItemStateFlag=_currentItemStateFlag - In the implementation block
@property (assign,nonatomic) BOOL extendedMessageIsExpanded;                           //@synthesize extendedMessageIsExpanded=_extendedMessageIsExpanded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canShowResultsForRedeem:(id)arg1 ;
-(void)dealloc;
-(NSOperationQueue *)operationQueue;
-(id)_item;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_itemView;
-(id)_emptySection;
-(double)_tableWidth;
-(void)_reloadSections;
-(void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2 ;
-(void)setItemImage:(UIImage *)arg1 ;
-(UIImage *)itemImage;
-(void)_setHeaderImage:(id)arg1 ;
-(void)setItemView:(SKUIGiftItemView *)arg1 ;
-(id)initWithRedeem:(id)arg1 ;
-(void)_passbookLockupAction:(id)arg1 ;
-(void)redeemResultsView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(SKUIGiftItemView *)itemView;
-(void)_setItemImage:(id)arg1 ;
-(void)_reloadResultViewMessage;
-(void)_redeemAnotherAction:(id)arg1 ;
-(void)_extendedMessageAction:(id)arg1 ;
-(void)_openAction:(id)arg1 ;
-(unsigned long long)currentItemStateFlag;
-(void)setCurrentItemStateFlag:(unsigned long long)arg1 ;
-(id)_resultImageViewSection;
-(id)_itemViewSection;
-(id)_messageViewSection;
-(id)_anotherButtonSection;
-(id)_passbookLearnMoreSection;
-(id)_headerImageViewSection;
-(id)_extendedMessageViewSection;
-(id)_linksSection;
-(UIButton *)anotherButton;
-(void)setAnotherButton:(UIButton *)arg1 ;
-(SKUITextLayout *)extendedMessageTextLayout;
-(void)setExtendedMessageTextLayout:(SKUITextLayout *)arg1 ;
-(SKUITextBoxView *)extendedMessageView;
-(void)setExtendedMessageView:(SKUITextBoxView *)arg1 ;
-(UIImageView *)headerImageView;
-(void)setHeaderImageView:(UIImageView *)arg1 ;
-(SKUIItemStateCenter *)itemStateCenter;
-(void)setItemStateCenter:(SKUIItemStateCenter *)arg1 ;
-(SKUIRedeemResultMessageView *)messageView;
-(void)setMessageView:(SKUIRedeemResultMessageView *)arg1 ;
-(SKUIRedeemITunesPassLockup *)passbookLockup;
-(void)setPassbookLockup:(SKUIRedeemITunesPassLockup *)arg1 ;
-(BOOL)extendedMessageIsExpanded;
-(void)setExtendedMessageIsExpanded:(BOOL)arg1 ;
@end

