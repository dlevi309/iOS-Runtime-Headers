/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>

@protocol PXPhotoLibraryPresenting;
@class UIViewController;

@interface PXMessagesRecentPhotosGadgetProvider : PXGadgetProvider {

	UIViewController*<PXPhotoLibraryPresenting> _recentPhotosViewController;
	double _preferredHeight;

}

@property (nonatomic,retain) UIViewController*<PXPhotoLibraryPresenting> recentPhotosViewController;              //@synthesize recentPhotosViewController=_recentPhotosViewController - In the implementation block
@property (assign,nonatomic) double preferredHeight;                                                              //@synthesize preferredHeight=_preferredHeight - In the implementation block
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(unsigned long long)estimatedNumberOfGadgets;
-(double)preferredHeight;
-(UIViewController*<PXPhotoLibraryPresenting>)recentPhotosViewController;
-(void)setRecentPhotosViewController:(UIViewController*<PXPhotoLibraryPresenting>)arg1 ;
-(void)setPreferredHeight:(double)arg1 ;
@end

