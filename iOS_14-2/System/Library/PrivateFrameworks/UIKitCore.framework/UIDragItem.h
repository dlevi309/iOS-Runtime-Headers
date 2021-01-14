/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIDragDropSessionInternal, _UIDragSetDownAnimationTarget;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSItemProvider, _UIDragPreviewBlockProvider, UITargetedDragPreview, UITextRange;

@interface UIDragItem : NSObject {

	BOOL _dirty;
	BOOL _deferPreviewUpdates;
	NSItemProvider* _itemProvider;
	id _localObject;
	/*^block*/id _previewProvider;
	_UIDragPreviewBlockProvider* _dragPreviewBlockProvider;
	unsigned long long _preferredPreviewType;
	unsigned long long _updatedPreviewType;
	id<_UIDragDropSessionInternal> _dragDropSession;
	UITargetedDragPreview* _targetedLiftPreview;
	id<_UIDragSetDownAnimationTarget> _sourceVisualTarget;
	id<_UIDragSetDownAnimationTarget> _destinationVisualTarget;
	id _privateLocalContext;
	unsigned long long __managementState;
	CGSize _visibleDropItemSize;

}

@property (setter=_setDraggedTextRange:,nonatomic,retain) UITextRange * _draggedTextRange; 
@property (nonatomic,retain) NSItemProvider * itemProvider;                                                                                                                     //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) _UIDragPreviewBlockProvider * dragPreviewBlockProvider;                                                                                            //@synthesize dragPreviewBlockProvider=_dragPreviewBlockProvider - In the implementation block
@property (assign,nonatomic) unsigned long long preferredPreviewType;                                                                                                           //@synthesize preferredPreviewType=_preferredPreviewType - In the implementation block
@property (assign,nonatomic) unsigned long long updatedPreviewType;                                                                                                             //@synthesize updatedPreviewType=_updatedPreviewType - In the implementation block
@property (assign,setter=_setDragDropSession:,getter=_dragDropSession,nonatomic,__weak) id<_UIDragDropSessionInternal> dragDropSession;                                         //@synthesize dragDropSession=_dragDropSession - In the implementation block
@property (getter=_targetedLiftPreview,nonatomic,retain) UITargetedDragPreview * targetedLiftPreview;                                                                           //@synthesize targetedLiftPreview=_targetedLiftPreview - In the implementation block
@property (assign,setter=_setVisibleDropItemSize:,getter=_visibleDropItemSize,nonatomic) CGSize visibleDropItemSize;                                                            //@synthesize visibleDropItemSize=_visibleDropItemSize - In the implementation block
@property (assign,setter=_setSourceVisualTarget:,getter=_sourceVisualTarget,nonatomic,__weak) id<_UIDragSetDownAnimationTarget> sourceVisualTarget;                             //@synthesize sourceVisualTarget=_sourceVisualTarget - In the implementation block
@property (assign,setter=_setDestinationVisualTarget:,getter=_destinationVisualTarget,nonatomic,__weak) id<_UIDragSetDownAnimationTarget> destinationVisualTarget;              //@synthesize destinationVisualTarget=_destinationVisualTarget - In the implementation block
@property (assign,setter=_setDirty:,getter=_isDirty,nonatomic) BOOL dirty;                                                                                                      //@synthesize dirty=_dirty - In the implementation block
@property (assign,setter=_setDeferPreviewUpdates:,getter=_deferPreviewUpdates,nonatomic) BOOL deferPreviewUpdates;                                                              //@synthesize deferPreviewUpdates=_deferPreviewUpdates - In the implementation block
@property (setter=_setPrivateLocalContext:,getter=_privateLocalContext,nonatomic,retain) id privateLocalContext;                                                                //@synthesize privateLocalContext=_privateLocalContext - In the implementation block
@property (assign,nonatomic) unsigned long long _managementState;                                                                                                               //@synthesize _managementState=__managementState - In the implementation block
@property (nonatomic,retain) id localObject;                                                                                                                                    //@synthesize localObject=_localObject - In the implementation block
@property (nonatomic,copy) id previewProvider;                                                                                                                                  //@synthesize previewProvider=_previewProvider - In the implementation block
-(id)localObject;
-(void)_uicmi_setAssociatedMenuIdentifier:(id)arg1 ;
-(id)_uicmi_getAssociatedMenuIdentifier;
-(BOOL)_isDirty;
-(NSItemProvider *)itemProvider;
-(id)_targetedLiftPreview;
-(void)_setDragDropSession:(id)arg1 ;
-(void)setTargetedLiftPreview:(UITargetedDragPreview *)arg1 ;
-(void)_setSourceVisualTarget:(id)arg1 ;
-(UITextRange *)_draggedTextRange;
-(void)_setDraggedTextRange:(id)arg1 ;
-(void)_setDestinationVisualTarget:(id)arg1 ;
-(id)_dragDropSession;
-(id)_previewProviderForType:(unsigned long long)arg1 ;
-(void)_setDirty:(BOOL)arg1 ;
-(void)_previewNeedsUpdateForType:(unsigned long long)arg1 ;
-(unsigned long long)preferredPreviewType;
-(void)_updatePreferredPreview;
-(void)_setDeferPreviewUpdates:(BOOL)arg1 ;
-(void)_loadOriginalImageComponentProvider;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(id)_currentPreviewProvider;
-(_UIDragPreviewBlockProvider *)dragPreviewBlockProvider;
-(void)setDragPreviewBlockProvider:(_UIDragPreviewBlockProvider *)arg1 ;
-(void)setPreferredPreviewType:(unsigned long long)arg1 ;
-(unsigned long long)updatedPreviewType;
-(void)setUpdatedPreviewType:(unsigned long long)arg1 ;
-(void)_setVisibleDropItemSize:(CGSize)arg1 ;
-(id)_sourceVisualTarget;
-(id)_destinationVisualTarget;
-(BOOL)_deferPreviewUpdates;
-(unsigned long long)_managementState;
-(void)set_managementState:(unsigned long long)arg1 ;
-(CGSize)_visibleDropItemSize;
-(id)initWithItemProvider:(id)arg1 ;
-(id)_privateLocalContext;
-(id)previewProvider;
-(void)_setPrivateLocalContext:(id)arg1 ;
-(void)setLocalObject:(id)arg1 ;
-(void)setPreviewProvider:(id)arg1 ;
@end

