/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


@class NSString, NSURL;

@interface PLPublishingMedia : NSObject {

	BOOL _isVideo;
	BOOL _isHDVideo;
	id _asset;
	NSString* _pathForVideoFile;
	NSURL* _assetURL;
	double _duration;

}

@property (nonatomic,retain) id asset;                                 //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL isVideo;                             //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,retain) NSString * pathForVideoFile;              //@synthesize pathForVideoFile=_pathForVideoFile - In the implementation block
@property (nonatomic,retain) NSURL * assetURL;                         //@synthesize assetURL=_assetURL - In the implementation block
@property (assign,nonatomic) BOOL isHDVideo;                           //@synthesize isHDVideo=_isHDVideo - In the implementation block
@property (assign,nonatomic) double duration;                          //@synthesize duration=_duration - In the implementation block
+(BOOL)isValidPublishingMedia:(id)arg1 ;
-(void)setAsset:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setAssetURL:(NSURL *)arg1 ;
-(id)asset;
-(NSURL *)assetURL;
-(BOOL)isHDVideo;
-(id)initWithManagedAsset:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(NSString *)pathForVideoFile;
-(BOOL)isVideo;
-(void)setIsVideo:(BOOL)arg1 ;
-(unsigned long long)hash;
-(double)duration;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithAVURLAsset:(id)arg1 ;
-(void)setPathForVideoFile:(NSString *)arg1 ;
-(void)setIsHDVideo:(BOOL)arg1 ;
@end

