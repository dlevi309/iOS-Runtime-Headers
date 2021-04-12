/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NCSizeObservingViewDelegate;
@interface NCSizeObservingView : UIView {

	BOOL _delegateInterestedInSizeChanges;
	id<NCSizeObservingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NCSizeObservingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NCSizeObservingViewDelegate>)delegate;
-(void)setDelegate:(id<NCSizeObservingViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end

