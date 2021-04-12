/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDragPreviewProvider.h>

@class _UIDraggingImageComponent, UIDragPreview, NSString;

@interface _UIDragPreviewBlockProvider : NSObject <_UIDragPreviewProvider> {

	/*^block*/id _previewProviderBlock;
	_UIDraggingImageComponent* _imageComponent;
	UIDragPreview* _preview;

}

@property (nonatomic,readonly) id<_UIDragPreviewProvider> _dragPreviewProvider; 
@property (nonatomic,readonly) UIDragPreview * preview;                                      //@synthesize preview=_preview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)previewProviderWithBlock:(/*^block*/id)arg1 ;
-(UIDragPreview *)preview;
-(id)_duiPreview;
-(id)imageComponent;
-(id<_UIDragPreviewProvider>)_dragPreviewProvider;
-(id)_createImageComponent;
@end

