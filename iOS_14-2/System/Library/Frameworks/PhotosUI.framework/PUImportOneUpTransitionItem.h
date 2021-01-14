/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class UIImage, PXImportItemViewModel, UIView;

@interface PUImportOneUpTransitionItem : NSObject {

	UIImage* _snapshotImage;
	PXImportItemViewModel* _importItem;
	double _initialContentAlpha;
	UIView* _transitionView;
	double _targetContentAlpha;
	CGRect _initialFrame;
	PXSimpleIndexPath _indexPath;
	CGRect _targetFrame;

}

@property (assign,nonatomic) CGRect initialFrame;                               //@synthesize initialFrame=_initialFrame - In the implementation block
@property (nonatomic,retain) UIImage * snapshotImage;                           //@synthesize snapshotImage=_snapshotImage - In the implementation block
@property (nonatomic,readonly) PXImportItemViewModel * importItem;              //@synthesize importItem=_importItem - In the implementation block
@property (nonatomic,readonly) PXSimpleIndexPath indexPath;                     //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) double initialContentAlpha;                        //@synthesize initialContentAlpha=_initialContentAlpha - In the implementation block
@property (nonatomic,retain) UIView * transitionView;                           //@synthesize transitionView=_transitionView - In the implementation block
@property (assign,nonatomic) CGRect targetFrame;                                //@synthesize targetFrame=_targetFrame - In the implementation block
@property (assign,nonatomic) double targetContentAlpha;                         //@synthesize targetContentAlpha=_targetContentAlpha - In the implementation block
-(PXSimpleIndexPath)indexPath;
-(void)setTransitionView:(UIView *)arg1 ;
-(UIImage *)snapshotImage;
-(PXImportItemViewModel *)importItem;
-(id)initWithInitialFrame:(CGRect)arg1 snapshotImage:(id)arg2 importItem:(id)arg3 indexPath:(PXSimpleIndexPath)arg4 ;
-(void)setSnapshotImage:(UIImage *)arg1 ;
-(double)initialContentAlpha;
-(void)setInitialContentAlpha:(double)arg1 ;
-(double)targetContentAlpha;
-(void)setTargetContentAlpha:(double)arg1 ;
-(UIView *)transitionView;
-(void)setTargetFrame:(CGRect)arg1 ;
-(CGRect)initialFrame;
-(void)setInitialFrame:(CGRect)arg1 ;
-(CGRect)targetFrame;
@end

