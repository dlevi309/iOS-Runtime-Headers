/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString, WLKMovieClipPreviewArtwork, NSArray, WLKMovieClipAsset;

@interface WLKMovieClip : NSObject {

	NSString* _title;
	WLKMovieClipPreviewArtwork* _previewArtwork;
	NSArray* _assets;
	NSString* _hlsUrl;

}

@property (nonatomic,copy,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) WLKMovieClipPreviewArtwork * previewArtwork;              //@synthesize previewArtwork=_previewArtwork - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assets;                                    //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) WLKMovieClipAsset * preferredAsset; 
@property (nonatomic,copy,readonly) NSString * hlsUrl;                                   //@synthesize hlsUrl=_hlsUrl - In the implementation block
+(id)movieClipsWithArray:(id)arg1 ;
-(NSArray *)assets;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)hlsUrl;
-(id)_init;
-(NSString *)title;
-(WLKMovieClipPreviewArtwork *)previewArtwork;
-(WLKMovieClipAsset *)preferredAsset;
-(id)preferredURL;
-(BOOL)_supportHD;
@end

