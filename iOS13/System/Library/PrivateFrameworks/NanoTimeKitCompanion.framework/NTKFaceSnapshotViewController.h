/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NTKFaceObserver.h>

@class NTKFace, UIImageView, UIImage, NSString;

@interface NTKFaceSnapshotViewController : UIViewController <NTKFaceObserver> {

	NTKFace* _face;
	UIImageView* _imageView;
	UIImage* _snapshotImage;
	NSString* _snapshotKeyOfSnapshotImage;

}

@property (nonatomic,readonly) UIImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * snapshotImage;                            //@synthesize snapshotImage=_snapshotImage - In the implementation block
@property (nonatomic,retain) NSString * snapshotKeyOfSnapshotImage;              //@synthesize snapshotKeyOfSnapshotImage=_snapshotKeyOfSnapshotImage - In the implementation block
@property (nonatomic,readonly) NTKFace * face;                                   //@synthesize face=_face - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NTKFace *)face;
-(UIImageView *)imageView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(UIImage *)snapshotImage;
-(void)setSnapshotImage:(UIImage *)arg1 ;
-(void)faceConfigurationDidChange:(id)arg1 ;
-(void)faceResourceDirectoryDidChange:(id)arg1 ;
-(id)initWithFace:(id)arg1 ;
-(void)_attemptToFetchSnapshot;
-(void)_handleSnapshot:(id)arg1 forKey:(id)arg2 ;
-(void)setSnapshotKeyOfSnapshotImage:(NSString *)arg1 ;
-(void)_updateFaceSnapshotIfNecessaryOfFace;
-(NSString *)snapshotKeyOfSnapshotImage;
@end

