/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUImageTileViewController.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>

@class ISAnimatedImageView, NSString;

@interface PUAnimatedImageTileViewController : PUImageTileViewController <PUAssetViewModelChangeObserver> {

	ISAnimatedImageView* _animatedImageView;
	long long _interactionState;
	SCD_Struct_PU16 _isValid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_invalidatePlaybackState;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_updateAnimatedImageIfNeeded;
-(void)_updatePlaybackStateIfNeeded;
-(void)assetViewModelDidChange;
-(void)_invalidateAnimatedImage;
-(id)loadView;
@end

