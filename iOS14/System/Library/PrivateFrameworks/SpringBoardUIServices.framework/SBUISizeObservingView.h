/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBounds:(CGRect)arg1 ;
-(void)setDelegate:(id<SBUISizeObservingViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end

