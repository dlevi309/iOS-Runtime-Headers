/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
*/

#import <UIKitCore/UIButton.h>

@protocol STMenuButtonDelegate;
@interface STMenuButton : UIButton {

	id<STMenuButtonDelegate> _delegate;

}

@property (__weak) id<STMenuButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id<STMenuButtonDelegate>)delegate;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)setDelegate:(id<STMenuButtonDelegate>)arg1 ;
@end

