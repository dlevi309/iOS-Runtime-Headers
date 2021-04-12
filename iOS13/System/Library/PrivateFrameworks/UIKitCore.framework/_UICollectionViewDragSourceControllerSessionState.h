/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIDragSession;
@interface _UICollectionViewDragSourceControllerSessionState : NSObject {

	id<UIDragSession> _dragSession;

}

@property (nonatomic,retain) id<UIDragSession> dragSession;              //@synthesize dragSession=_dragSession - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
-(id)description;
-(BOOL)isActive;
-(id<UIDragSession>)dragSession;
-(void)setDragSession:(id<UIDragSession>)arg1 ;
@end

