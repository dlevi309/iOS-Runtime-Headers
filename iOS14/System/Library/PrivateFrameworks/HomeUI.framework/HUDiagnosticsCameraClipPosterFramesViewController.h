/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class HMCameraProfile, HMCameraClip, NSOperationQueue, UICollectionView, NSString;

@interface HUDiagnosticsCameraClipPosterFramesViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	HMCameraProfile* _cameraProfile;
	HMCameraClip* _cameraClip;
	NSOperationQueue* _diagnosticOperationQueue;
	UICollectionView* _posterFrameCollectionView;

}

@property (nonatomic,retain) HMCameraProfile * cameraProfile;                           //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,retain) HMCameraClip * cameraClip;                                 //@synthesize cameraClip=_cameraClip - In the implementation block
@property (nonatomic,retain) NSOperationQueue * diagnosticOperationQueue;               //@synthesize diagnosticOperationQueue=_diagnosticOperationQueue - In the implementation block
@property (nonatomic,retain) UICollectionView * posterFrameCollectionView;              //@synthesize posterFrameCollectionView=_posterFrameCollectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(HMCameraProfile *)cameraProfile;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(HMCameraClip *)cameraClip;
-(void)viewDidLoad;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(void)setCameraClip:(HMCameraClip *)arg1 ;
-(id)initWithCameraClip:(id)arg1 cameraProfile:(id)arg2 ;
-(UICollectionView *)posterFrameCollectionView;
-(NSOperationQueue *)diagnosticOperationQueue;
-(void)setDiagnosticOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setPosterFrameCollectionView:(UICollectionView *)arg1 ;
@end

