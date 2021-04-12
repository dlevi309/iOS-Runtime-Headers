/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBounds:(CGRect)arg1 ;
-(void)setDelegate:(id<NCSizeObservingViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end

