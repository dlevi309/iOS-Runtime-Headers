/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFolderControllerDelegate;
@interface _SBHomeScreenFolderDelegate : NSObject {

	id<SBFolderControllerDelegate> _forwardingTarget;

}

@property (nonatomic,retain) id<SBFolderControllerDelegate> forwardingTarget;              //@synthesize forwardingTarget=_forwardingTarget - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)backgroundViewForDockForRootFolderController:(id)arg1 ;
-(id<SBFolderControllerDelegate>)forwardingTarget;
-(void)setForwardingTarget:(id<SBFolderControllerDelegate>)arg1 ;
@end

