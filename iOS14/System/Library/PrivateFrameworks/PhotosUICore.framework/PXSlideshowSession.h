/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/OKPresentationViewControllerDelegate.h>

@protocol PXSlideshowSessionDelegate;
@class OKPresentationViewController, PHAssetCollection, UIView, NSString;

@interface PXSlideshowSession : NSObject <OKPresentationViewControllerDelegate> {

	OKPresentationViewController* _presentationViewController;
	id<PXSlideshowSessionDelegate> _delegate;
	PHAssetCollection* _assetCollection;
	long long _startIndex;

}

@property (assign,nonatomic,__weak) id<PXSlideshowSessionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                                 //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) long long startIndex;                                                //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,readonly) OKPresentationViewController * slideshowViewController; 
@property (nonatomic,readonly) UIView * slideshowView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void*)_loadSlideshowFrameworkIfNeeded;
+(void)preloadSlideshowFrameworkIfNeeded;
-(long long)startIndex;
-(id)init;
-(id<PXSlideshowSessionDelegate>)delegate;
-(void)presentationViewControllerDidPrepare:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg1 startIndex:(long long)arg2 ;
-(UIView *)slideshowView;
-(id)_presentationGuidelines;
-(void)_initPresentationViewController;
-(void)setDelegate:(id<PXSlideshowSessionDelegate>)arg1 ;
-(PHAssetCollection *)assetCollection;
-(OKPresentationViewController *)slideshowViewController;
-(void)dealloc;
@end

