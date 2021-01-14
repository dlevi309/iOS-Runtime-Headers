/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIView.h>

@protocol _PXPhotosGridContainerDelegate;
@interface _PXPhotosGridContainerUIView : UIView {

	id<_PXPhotosGridContainerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_PXPhotosGridContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_PXPhotosGridContainerDelegate>)delegate;
-(void)setDelegate:(id<_PXPhotosGridContainerDelegate>)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
@end

