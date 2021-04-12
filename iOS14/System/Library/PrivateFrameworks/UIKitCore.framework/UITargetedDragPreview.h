/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITargetedPreview.h>
#import <UIKitCore/_UIDragPreviewProvider.h>

@class _DUIPreview, _UIDraggingImageComponent, NSDictionary, UIView, NSString;

@interface UITargetedDragPreview : UITargetedPreview <_UIDragPreviewProvider> {

	BOOL _didSetLiftAnchorPoint;
	_DUIPreview* _duiPreview;
	_UIDraggingImageComponent* _imageComponent;
	BOOL _preventAfterScreenUpdatesSnapshot;
	NSDictionary* __springboardParameters;
	CGPoint _liftAnchorPoint;

}

@property (assign,setter=_setDefaultPreview:,getter=_isDefaultPreview,nonatomic) BOOL defaultPreview; 
@property (assign,setter=_setPreventAfterScreenUpdatesSnapshot:,getter=_preventAfterScreenUpdatesSnapshot,nonatomic) BOOL preventAfterScreenUpdatesSnapshot;              //@synthesize preventAfterScreenUpdatesSnapshot=_preventAfterScreenUpdatesSnapshot - In the implementation block
@property (assign,setter=_setViewToSnapshot:,getter=_viewToSnapshot,nonatomic,__weak) UIView * viewToSnapshot; 
@property (nonatomic,readonly) id<_UIDragPreviewProvider> _dragPreviewProvider; 
@property (assign,nonatomic) CGPoint liftAnchorPoint;                                                                                                                     //@synthesize liftAnchorPoint=_liftAnchorPoint - In the implementation block
@property (nonatomic,readonly) _DUIPreview * _duiPreview; 
@property (nonatomic,copy) NSDictionary * _springboardParameters;                                                                                                         //@synthesize _springboardParameters=__springboardParameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)previewForURL:(id)arg1 target:(id)arg2 ;
+(id)previewForURL:(id)arg1 title:(id)arg2 target:(id)arg3 ;
-(_DUIPreview *)_duiPreview;
-(void)takeLiftAnchorPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(id<_UIDragPreviewProvider>)_dragPreviewProvider;
-(void)_setPreviewMode:(long long)arg1 ;
-(NSDictionary *)_springboardParameters;
-(BOOL)_preventAfterScreenUpdatesSnapshot;
-(void)set_springboardParameters:(NSDictionary *)arg1 ;
-(void)_setPreventAfterScreenUpdatesSnapshot:(BOOL)arg1 ;
-(id)initWithView:(id)arg1 parameters:(id)arg2 target:(id)arg3 ;
-(id)retargetedPreviewWithTarget:(id)arg1 ;
-(void)setLiftAnchorPoint:(CGPoint)arg1 ;
-(id)imageComponent;
-(CGPoint)liftAnchorPoint;
@end

