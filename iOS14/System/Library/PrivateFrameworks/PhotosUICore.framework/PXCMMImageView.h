/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class UIImageView, UIView, PXImageRequesterHelper, PXCMMImageViewModel, NSString;

@interface PXCMMImageView : UIView <PXChangeObserver> {

	UIImageView* _imageView;
	UIView* _highlightView;
	PXImageRequesterHelper* _imageRequesterHelper;
	PXCMMImageViewModel* _viewModel;

}

@property (nonatomic,retain) PXCMMImageViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(PXCMMImageViewModel *)viewModel;
-(void)_updateImage;
-(void)setViewModel:(PXCMMImageViewModel *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_updateContentsRect;
-(BOOL)test_highlighted;
-(void)_updateImageRequestHelper;
-(void)_updateHighlighted;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

