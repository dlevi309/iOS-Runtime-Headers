/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@protocol MFPopupButtonDelegate;
@class UILabel, MFPopupButtonItem, NSArray, UIFont, NSString;

@interface MFPopupButton : UIControl <UIContextMenuInteractionDelegate> {

	UILabel* _label;
	id<MFPopupButtonDelegate> _delegate;
	MFPopupButtonItem* _selectedItem;
	NSArray* _items;

}

@property (nonatomic,readonly) UILabel * label;                                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) id<MFPopupButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MFPopupButtonItem * selectedItem;                         //@synthesize selectedItem=_selectedItem - In the implementation block
@property (nonatomic,copy) NSArray * items;                                          //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,readonly) BOOL canPresentMenu; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dismissMenu;
-(id<MFPopupButtonDelegate>)delegate;
-(void)setFont:(UIFont *)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)_didSelectItem:(id)arg1 ;
-(id)_actionForItem:(id)arg1 ;
-(BOOL)canPresentMenu;
-(NSArray *)items;
-(CGPoint)menuAttachmentPointForConfiguration:(id)arg1 ;
-(void)setDelegate:(id<MFPopupButtonDelegate>)arg1 ;
-(void)_updateUI;
-(MFPopupButtonItem *)selectedItem;
-(void)sizeToFit;
-(UILabel *)label;
-(void)setSelectedItem:(MFPopupButtonItem *)arg1 ;
-(UIFont *)font;
@end

