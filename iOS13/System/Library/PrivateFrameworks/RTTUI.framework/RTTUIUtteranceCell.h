/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/

#import <RTTUI/RTTUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@protocol RTTUIUtteranceCellDelegate;
@class UITextView, CALayer, RTTUtterance, NSString;

@interface RTTUIUtteranceCell : UITableViewCell <UITextViewDelegate> {

	UITextView* _textView;
	CALayer* _bubbleLayer;
	BOOL _editingUtterance;
	BOOL _accessibilityIsUnread;
	RTTUtterance* _utterance;
	id<RTTUIUtteranceCellDelegate> _delegate;

}

@property (assign,setter=_accessibilitySetIsUnread:,getter=_accessibilityIsUnread,nonatomic) BOOL accessibilityIsUnread;              //@synthesize accessibilityIsUnread=_accessibilityIsUnread - In the implementation block
@property (nonatomic,retain) RTTUtterance * utterance;                                                                                //@synthesize utterance=_utterance - In the implementation block
@property (assign,getter=isEditingUtterance,nonatomic) BOOL editingUtterance;                                                         //@synthesize editingUtterance=_editingUtterance - In the implementation block
@property (assign,nonatomic,__weak) id<RTTUIUtteranceCellDelegate> delegate;                                                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForUtterance:(id)arg1 andWidth:(double)arg2 ;
-(void)dealloc;
-(id<RTTUIUtteranceCellDelegate>)delegate;
-(void)setDelegate:(id<RTTUIUtteranceCellDelegate>)arg1 ;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)layoutSubviews;
-(void)updateLayout;
-(NSRange)selectedTextRange;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)textViewDidChange:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(BOOL)_accessibilityRealtimeCompleted;
-(BOOL)_accessibilityRealtimeHasUnread;
-(void)_accessibilityHandleATFocused:(BOOL)arg1 assistiveTech:(id)arg2 ;
-(RTTUtterance *)utterance;
-(void)setUtterance:(RTTUtterance *)arg1 ;
-(void)setSendProgressIndex:(unsigned long long)arg1 ;
-(void)updateUtterance:(id)arg1 ;
-(void)setEditingUtterance:(BOOL)arg1 ;
-(void)updateUtterance:(id)arg1 postNotifications:(BOOL)arg2 ;
-(void)_accessibilitySetIsUnread:(BOOL)arg1 ;
-(void)adjustTextViewSize;
-(BOOL)_accessibilityIsUnread;
-(BOOL)isEditingUtterance;
@end

