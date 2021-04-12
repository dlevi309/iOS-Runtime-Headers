/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UIPlatterView *)platterView;
-(void)setPlatterView:(_UIPlatterView *)arg1 ;
-(double)liftAlpha;
-(void)setSourceViewWasAdded:(BOOL)arg1 ;
-(void)setTargetedPreview:(UITargetedDragPreview *)arg1 ;
-(BOOL)sourceViewWasAdded;
-(void)setLiftAlpha:(double)arg1 ;
-(UITargetedDragPreview *)targetedPreview;
@end

