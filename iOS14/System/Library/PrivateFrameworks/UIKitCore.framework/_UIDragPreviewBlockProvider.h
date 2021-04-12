/*
* Generated on Thursday, January 14, 2021 at 2:20:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<_UIDragPreviewProvider>)_dragPreviewProvider;
-(id)_createImageComponent;
-(id)imageComponent;
@end

