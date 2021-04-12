/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NTKFaceObserver.h>

@class NTKFace, UIImageView, UIImage, NSString, NTKFaceSnapshotCacheRequest;

@interface NTKFaceSnapshotViewController : UIViewController <NTKFaceObserver> {

	NTKFace* _face;
	UIImageView* _imageView;
	UIImage* _snapshotImage;
	NSString* _snapshotKeyOfSnapshotImage;
	NTKFaceSnapshotCacheRequest* _snapshotRequest;

}

@property (nonatomic,readonly) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * snapshotImage;                                    //@synthesize snapshotImage=_snapshotImage - In the implementation block
@property (nonatomic,retain) NSString * snapshotKeyOfSnapshotImage;                      //@synthesize snapshotKeyOfSnapshotImage=_snapshotKeyOfSnapshotImage - In the implementation block
@property (nonatomic,retain) NTKFaceSnapshotCacheRequest * snapshotRequest;              //@synthesize snapshotRequest=_snapshotRequest - In the implementation block
@property (nonatomic,readonly) NTKFace * face;                                           //@synthesize face=_face - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(UIImageView *)imageView;
-(NTKFaceSnapshotCacheRequest *)snapshotRequest;
-(NTKFace *)face;
-(UIImage *)snapshotImage;
-(void)viewDidLoad;
-(void)setSnapshotImage:(UIImage *)arg1 ;
-(id)initWithFace:(id)arg1 ;
-(void)dealloc;
-(void)faceConfigurationDidChange:(id)arg1 ;
-(void)faceResourceDirectoryDidChange:(id)arg1 ;
-(void)_attemptToFetchSnapshot;
-(void)_handleSnapshot:(id)arg1 forKey:(id)arg2 ;
-(void)setSnapshotKeyOfSnapshotImage:(NSString *)arg1 ;
-(void)_updateFaceSnapshotIfNecessaryOfFace;
-(NSString *)snapshotKeyOfSnapshotImage;
-(void)setSnapshotRequest:(NTKFaceSnapshotCacheRequest *)arg1 ;
@end

