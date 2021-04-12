/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIView, _UIPortalView, _UIContextMenuCommitContainerView;

@interface _UIContextMenuCommitAnimation : NSObject {

	double _sourceRadius;
	double _destinationRadius;
	UIView* _source;
	UIView* _destination;
	UIView* _container;
	UIView* _morphContainer;
	UIView* _sourceSnapshotView;
	UIView* _sourceTransformView;
	UIView* _destinationTransformView;
	UIView* _originalContentSnapshotView;
	_UIPortalView* _destinationContentPortalView;
	_UIContextMenuCommitContainerView* _animationContainer;
	unsigned long long _animationCount;

}

@property (nonatomic,retain) UIView * source;                                                     //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) UIView * destination;                                                //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) UIView * container;                                                  //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UIView * morphContainer;                                             //@synthesize morphContainer=_morphContainer - In the implementation block
@property (nonatomic,retain) UIView * sourceSnapshotView;                                         //@synthesize sourceSnapshotView=_sourceSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * sourceTransformView;                                        //@synthesize sourceTransformView=_sourceTransformView - In the implementation block
@property (nonatomic,retain) UIView * destinationTransformView;                                   //@synthesize destinationTransformView=_destinationTransformView - In the implementation block
@property (nonatomic,retain) UIView * originalContentSnapshotView;                                //@synthesize originalContentSnapshotView=_originalContentSnapshotView - In the implementation block
@property (nonatomic,retain) _UIPortalView * destinationContentPortalView;                        //@synthesize destinationContentPortalView=_destinationContentPortalView - In the implementation block
@property (nonatomic,retain) _UIContextMenuCommitContainerView * animationContainer;              //@synthesize animationContainer=_animationContainer - In the implementation block
@property (assign,nonatomic) unsigned long long animationCount;                                   //@synthesize animationCount=_animationCount - In the implementation block
@property (assign,nonatomic) double sourceRadius;                                                 //@synthesize sourceRadius=_sourceRadius - In the implementation block
@property (assign,nonatomic) double destinationRadius;                                            //@synthesize destinationRadius=_destinationRadius - In the implementation block
-(UIView *)container;
-(void)setContainer:(UIView *)arg1 ;
-(void)setSource:(UIView *)arg1 ;
-(UIView *)source;
-(UIView *)destination;
-(void)setDestination:(UIView *)arg1 ;
-(void)setSourceRadius:(double)arg1 ;
-(void)setDestinationRadius:(double)arg1 ;
-(unsigned long long)animationCount;
-(void)setAnimationCount:(unsigned long long)arg1 ;
-(_UIContextMenuCommitContainerView *)animationContainer;
-(void)_prepareSnapshots;
-(void)_prepareAnimationViews;
-(UIView *)sourceTransformView;
-(UIView *)destinationTransformView;
-(double)destinationRadius;
-(UIView *)morphContainer;
-(UIView *)originalContentSnapshotView;
-(void)setOriginalContentSnapshotView:(UIView *)arg1 ;
-(double)sourceRadius;
-(void)setSourceSnapshotView:(UIView *)arg1 ;
-(void)setAnimationContainer:(_UIContextMenuCommitContainerView *)arg1 ;
-(void)setMorphContainer:(UIView *)arg1 ;
-(void)setDestinationContentPortalView:(_UIPortalView *)arg1 ;
-(void)setDestinationTransformView:(UIView *)arg1 ;
-(UIView *)sourceSnapshotView;
-(void)setSourceTransformView:(UIView *)arg1 ;
-(id)initWithSource:(id)arg1 container:(id)arg2 ;
-(void)animateWithAlongsideActions:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(_UIPortalView *)destinationContentPortalView;
@end

