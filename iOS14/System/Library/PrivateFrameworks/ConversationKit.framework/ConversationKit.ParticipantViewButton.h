/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

