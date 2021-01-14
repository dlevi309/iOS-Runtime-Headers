/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PXPerson;
@interface PXPeopleMergeContentViewController : UIViewController {

	id<PXPerson> _targetPerson;
	id<PXPerson> _draggedPerson;

}

@property (nonatomic,retain) id<PXPerson> targetPerson;               //@synthesize targetPerson=_targetPerson - In the implementation block
@property (nonatomic,retain) id<PXPerson> draggedPerson;              //@synthesize draggedPerson=_draggedPerson - In the implementation block
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id<PXPerson>)targetPerson;
-(void)setTargetPerson:(id<PXPerson>)arg1 ;
-(id)initWithTargetPerson:(id)arg1 draggedPerson:(id)arg2 ;
-(id<PXPerson>)draggedPerson;
-(void)setDraggedPerson:(id<PXPerson>)arg1 ;
@end

