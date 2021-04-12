/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSRange)selectedTextRange;
-(void)updateLayout;
-(id)accessibilityLabel;
-(RTTUtterance *)utterance;
-(BOOL)isAccessibilityElement;
-(id<RTTUIUtteranceCellDelegate>)delegate;
-(void)setUtterance:(RTTUtterance *)arg1 ;
-(void)setDelegate:(id<RTTUIUtteranceCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)_accessibilityRealtimeCompleted;
-(BOOL)_accessibilityRealtimeHasUnread;
-(void)_accessibilityHandleATFocused:(BOOL)arg1 assistiveTech:(id)arg2 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)setSendProgressIndex:(unsigned long long)arg1 ;
-(void)updateUtterance:(id)arg1 ;
-(void)setEditingUtterance:(BOOL)arg1 ;
-(void)updateUtterance:(id)arg1 postNotifications:(BOOL)arg2 ;
-(void)_accessibilitySetIsUnread:(BOOL)arg1 ;
-(id)utteranceTextColor;
-(void)adjustTextViewSize;
-(BOOL)_accessibilityIsUnread;
-(BOOL)isEditingUtterance;
@end

