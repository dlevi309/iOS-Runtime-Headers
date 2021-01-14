/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXAnonymousView, PXZoomablePhotosInteractionDelegate;
@class PXZoomablePhotosViewModel, NSObject;

@interface PXZoomablePhotosInteraction : NSObject {

	double _currentMagnifyEventScale;
	id _eventMonitor;
	PXZoomablePhotosViewModel* _viewModel;
	NSObject*<PXAnonymousView> _view;
	id<PXZoomablePhotosInteractionDelegate> _delegate;

}

@property (nonatomic,readonly) PXZoomablePhotosViewModel * viewModel;                              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) NSObject*<PXAnonymousView> view;                                    //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<PXZoomablePhotosInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PXZoomablePhotosInteractionDelegate>)delegate;
-(BOOL)handlePinch:(id)arg1 ;
-(id)initWithZoomablePhotosViewModel:(id)arg1 view:(id)arg2 ;
-(PXZoomablePhotosViewModel *)viewModel;
-(void)setDelegate:(id<PXZoomablePhotosInteractionDelegate>)arg1 ;
-(NSObject*<PXAnonymousView>)view;
-(BOOL)_pinchInteractionShouldBegin;
-(BOOL)handleTapOnAssetReference:(id)arg1 ;
@end

