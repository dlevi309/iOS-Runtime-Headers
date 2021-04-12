/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardFoundation/SBFView.h>

@protocol SBUISizeObservingViewDelegate;
@interface SBUISizeObservingView : SBFView {

	BOOL _delegateInterestedInSizeChanges;
	id<SBUISizeObservingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBUISizeObservingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBUISizeObservingViewDelegate>)delegate;
-(void)setDelegate:(id<SBUISizeObservingViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end

