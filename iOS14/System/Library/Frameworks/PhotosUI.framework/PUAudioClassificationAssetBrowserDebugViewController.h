/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSString;

@interface PUAudioClassificationAssetBrowserDebugViewController : PUPhotosAlbumViewController {

	NSString* _audioClassificationName;

}

@property (nonatomic,copy) NSString * audioClassificationName;              //@synthesize audioClassificationName=_audioClassificationName - In the implementation block
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(void)_fileRadarWithIncorrectAssets:(id)arg1 ;
-(BOOL)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2 ;
-(id)_cloneAsset:(id)arg1 toDirectory:(id)arg2 ;
-(NSString *)audioClassificationName;
-(void)setAudioClassificationName:(NSString *)arg1 ;
-(void)viewDidLoad;
-(void)_presentTapToRadar;
@end

