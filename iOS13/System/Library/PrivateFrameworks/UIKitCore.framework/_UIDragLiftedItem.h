/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIPlatterView, UITargetedDragPreview;

@interface _UIDragLiftedItem : NSObject {

	BOOL _sourceViewWasAdded;
	_UIPlatterView* _platterView;
	UITargetedDragPreview* _targetedPreview;
	double _liftAlpha;

}

@property (nonatomic,retain) _UIPlatterView * platterView;                         //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) UITargetedDragPreview * targetedPreview;              //@synthesize targetedPreview=_targetedPreview - In the implementation block
@property (assign,nonatomic) BOOL sourceViewWasAdded;                              //@synthesize sourceViewWasAdded=_sourceViewWasAdded - In the implementation block
@property (assign,nonatomic) double liftAlpha;                                     //@synthesize liftAlpha=_liftAlpha - In the implementation block
-(void)setPlatterView:(_UIPlatterView *)arg1 ;
-(_UIPlatterView *)platterView;
-(UITargetedDragPreview *)targetedPreview;
-(void)setTargetedPreview:(UITargetedDragPreview *)arg1 ;
-(BOOL)sourceViewWasAdded;
-(void)setSourceViewWasAdded:(BOOL)arg1 ;
-(double)liftAlpha;
-(void)setLiftAlpha:(double)arg1 ;
@end

