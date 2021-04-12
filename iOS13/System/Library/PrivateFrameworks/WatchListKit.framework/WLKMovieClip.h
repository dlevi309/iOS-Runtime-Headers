/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)_init;
-(NSString *)title;
-(NSArray *)assets;
-(WLKMovieClipPreviewArtwork *)previewArtwork;
-(NSString *)hlsUrl;
-(WLKMovieClipAsset *)preferredAsset;
-(id)preferredURL;
-(BOOL)_supportHD;
@end

