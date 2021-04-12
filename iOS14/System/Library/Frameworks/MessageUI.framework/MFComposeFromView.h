/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMailComposeHeaderView.h>
#import <libobjc.A.dylib/MFPopupButtonDelegate.h>

@class MFPopupButton, NSArray, NSString;

@interface MFComposeFromView : MFMailComposeHeaderView <MFPopupButtonDelegate> {

	MFPopupButton* _popupButton;

}

@property (nonatomic,retain) MFPopupButton * popupButton;                                     //@synthesize popupButton=_popupButton - In the implementation block
@property (assign,nonatomic,__weak) id<MFComposeFromViewDelegate> delegate; 
@property (nonatomic,copy) NSString*<ECEmailAddressConvertible> selectedAddress; 
@property (nonatomic,retain) NSArray * availableAddresses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(MFPopupButton *)popupButton;
-(void)popupButton:(id)arg1 didSelectItem:(id)arg2 ;
-(void)popupButtonWillPresentMenu:(id)arg1 animator:(id)arg2 ;
-(void)setSelectedAddress:(NSString*<ECEmailAddressConvertible>)arg1 ;
-(NSString*<ECEmailAddressConvertible>)selectedAddress;
-(void)setAvailableAddresses:(NSArray *)arg1 ;
-(NSArray *)availableAddresses;
-(void)setPopupButton:(MFPopupButton *)arg1 ;
-(void)refreshPreferredContentSize;
@end

