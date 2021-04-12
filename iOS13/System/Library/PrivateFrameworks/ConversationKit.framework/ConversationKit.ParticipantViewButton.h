/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UIControl.h>

@interface ConversationKit.ParticipantViewButton : UIControl {

	 imageView;
	 blurView;
	 discView;
	 image;
	 colorConfiguration;

}

@property (assign,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL highlighted; 
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
@end

