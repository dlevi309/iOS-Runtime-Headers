/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBAppClipOverlayViewDelegate;
@class NSString;

@interface SBAppClipOverlayView : SBFTouchPassThroughView <BSInvalidatable> {

	id<SBAppClipOverlayViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBAppClipOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SBAppClipOverlayViewDelegate>)delegate;
-(void)setDelegate:(id<SBAppClipOverlayViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
@end

