/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUVideoEditPluginSessionDataSource.h>

@class PHAsset, NSString;

@interface PUVideoEditPluginDataSource : NSObject <PUVideoEditPluginSessionDataSource> {

	BOOL _allowsRevertInSession;
	PHAsset* _videoAsset;

}

@property (nonatomic,retain) PHAsset * videoAsset;                    //@synthesize videoAsset=_videoAsset - In the implementation block
@property (assign,nonatomic) BOOL allowsRevertInSession;              //@synthesize allowsRevertInSession=_allowsRevertInSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(/*^block*/id)arg2 ;
-(void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)editPluginSessionCanRevertToOriginal:(id)arg1 ;
-(void)editPluginSession:(id)arg1 revertToOriginalWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(/*^block*/id)arg2 ;
-(void)setVideoAsset:(PHAsset *)arg1 ;
-(id)initWithVideoAsset:(id)arg1 ;
-(void)_fetchCanRevertAsset:(id)arg1 asynchronously:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)allowsRevertInSession;
-(void)setAllowsRevertInSession:(BOOL)arg1 ;
-(void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(/*^block*/id)arg2 ;
-(PHAsset *)videoAsset;
-(void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(BOOL)arg3 resultHandler:(/*^block*/id)arg4 ;
@end

