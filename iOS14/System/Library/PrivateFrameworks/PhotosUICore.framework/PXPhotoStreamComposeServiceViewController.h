/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <Social/SLComposeServiceViewController.h>

@protocol PXPhotoStreamComposeServiceDelegate;
@class NSString;

@interface PXPhotoStreamComposeServiceViewController : SLComposeServiceViewController {

	BOOL _shouldAllowAlbumPicking;
	BOOL _addToExistingWorkflow;
	id<PXPhotoStreamComposeServiceDelegate> _delegate;
	/*^block*/id _completion;
	NSString* _albumTitle;

}

@property (assign,nonatomic,__weak) id<PXPhotoStreamComposeServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowAlbumPicking;                                         //@synthesize shouldAllowAlbumPicking=_shouldAllowAlbumPicking - In the implementation block
@property (nonatomic,copy) id completion;                                                          //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) BOOL addToExistingWorkflow;                                           //@synthesize addToExistingWorkflow=_addToExistingWorkflow - In the implementation block
@property (nonatomic,retain) NSString * albumTitle;                                                //@synthesize albumTitle=_albumTitle - In the implementation block
+(void)initialize;
+(void)registerCanonicalClass:(Class)arg1 ;
+(id)createCanonicalInstance;
-(void)setCompletion:(id)arg1 ;
-(id<PXPhotoStreamComposeServiceDelegate>)delegate;
-(id)completion;
-(void)setDelegate:(id<PXPhotoStreamComposeServiceDelegate>)arg1 ;
-(BOOL)addToExistingWorkflow;
-(BOOL)shouldAllowAlbumPicking;
-(NSString *)albumTitle;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(void)setSourcesToShare:(id)arg1 ;
-(void)setShouldAllowAlbumPicking:(BOOL)arg1 ;
-(void)setAssetsToShare:(id)arg1 ;
-(void)setAddToExistingWorkflow:(BOOL)arg1 ;
@end

