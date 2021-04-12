/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <UIKitCore/UIView.h>

@protocol MCDErrorViewDelegate;
@interface MCDErrorLoadingView : UIView {

	BOOL _shouldEnableNetwork;
	id<MCDErrorViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MCDErrorViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableNetwork;                              //@synthesize shouldEnableNetwork=_shouldEnableNetwork - In the implementation block
-(id<MCDErrorViewDelegate>)delegate;
-(void)setDelegate:(id<MCDErrorViewDelegate>)arg1 ;
-(id)initWithTitle:(id)arg1 buttonText:(id)arg2 ;
-(void)retryButtonPressed:(id)arg1 ;
-(BOOL)shouldEnableNetwork;
-(void)setShouldEnableNetwork:(BOOL)arg1 ;
@end

