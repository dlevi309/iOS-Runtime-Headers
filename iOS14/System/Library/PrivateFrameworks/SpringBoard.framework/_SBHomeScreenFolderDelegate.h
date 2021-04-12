/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

