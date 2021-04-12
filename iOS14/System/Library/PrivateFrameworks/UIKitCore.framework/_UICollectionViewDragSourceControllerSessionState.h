/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIDragSession;
@interface _UICollectionViewDragSourceControllerSessionState : NSObject {

	id<UIDragSession> _dragSession;

}

@property (nonatomic,retain) id<UIDragSession> dragSession;              //@synthesize dragSession=_dragSession - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
-(void)setDragSession:(id<UIDragSession>)arg1 ;
-(BOOL)isActive;
-(id)description;
-(id<UIDragSession>)dragSession;
@end

