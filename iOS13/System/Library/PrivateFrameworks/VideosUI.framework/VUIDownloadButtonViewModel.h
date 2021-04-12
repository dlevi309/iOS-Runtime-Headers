/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIMediaEntityAssetControllerDelegate.h>

@protocol VUIMediaEntityAssetController;
@class VUIVideosPlayable, NSObject, NSString, NSArray;

@interface VUIDownloadButtonViewModel : NSObject <VUIMediaEntityAssetControllerDelegate> {

	VUIVideosPlayable* _videosPlayable;
	unsigned long long _downloadState;
	double _downloadProgress;
	NSObject*<VUIMediaEntityAssetController> _assetController;
	NSString* _downloadStateStringValue;
	NSArray* _downloadStateToString;

}

@property (assign,nonatomic) unsigned long long downloadState;                                      //@synthesize downloadState=_downloadState - In the implementation block
@property (nonatomic,retain) NSString * downloadStateStringValue;                                   //@synthesize downloadStateStringValue=_downloadStateStringValue - In the implementation block
@property (assign,nonatomic) double downloadProgress;                                               //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,retain) VUIVideosPlayable * videosPlayable;                                    //@synthesize videosPlayable=_videosPlayable - In the implementation block
@property (nonatomic,retain) NSArray * downloadStateToString;                                       //@synthesize downloadStateToString=_downloadStateToString - In the implementation block
@property (nonatomic,retain) NSObject*<VUIMediaEntityAssetController> assetController;              //@synthesize assetController=_assetController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)downloadProgress;
-(void)setDownloadProgress:(double)arg1 ;
-(unsigned long long)downloadState;
-(void)setDownloadState:(unsigned long long)arg1 ;
-(void)resumeDownload;
-(NSObject*<VUIMediaEntityAssetController>)assetController;
-(void)setAssetController:(NSObject*<VUIMediaEntityAssetController>)arg1 ;
-(void)mediaEntityAssetController:(id)arg1 stateDidChange:(id)arg2 ;
-(void)pauseDownload;
-(id)initWithVideosPlayable:(id)arg1 ;
-(VUIVideosPlayable *)videosPlayable;
-(void)setVideosPlayable:(VUIVideosPlayable *)arg1 ;
-(void)_getAssetControllerCreatingMediaItem:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createDownloadStateToStringArrayMap;
-(void)setDownloadStateToString:(NSArray *)arg1 ;
-(void)_updateDownloadStateFromAssetControllerState:(id)arg1 ;
-(unsigned long long)_downloadStateFromAssetsControllerStatus:(unsigned long long)arg1 ;
-(id)initWithAssetController:(id)arg1 ;
-(void)startDownloadAllowingCellular:(BOOL)arg1 quality:(long long)arg2 ;
-(void)stopDownload;
-(void)deleteDownload;
-(void)preflightPresentingViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)downloadStateStringValue;
-(void)setDownloadStateStringValue:(NSString *)arg1 ;
-(NSArray *)downloadStateToString;
@end

