/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/FBSceneHostSnapshotView.h>
@class FBSceneSnapshot;


@protocol FBSceneHostSnapshotView <NSObject>
@property (nonatomic,retain,readonly) FBSceneSnapshot * sceneSnapshot; 
@property (nonatomic,retain,readonly) id IOSurface; 
@required
-(id)IOSurface;
-(FBSceneSnapshot *)sceneSnapshot;

@end


@class FBSceneSnapshot, NSString;

@interface FBSceneHostSnapshotView : UIView <FBSceneHostSnapshotView> {

	FBSceneSnapshot* _snapshot;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) FBSceneSnapshot * sceneSnapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain,readonly) id IOSurface; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)IOSurface;
-(FBSceneSnapshot *)sceneSnapshot;
-(id)_initWithSnapshot:(id)arg1 ;
@end

