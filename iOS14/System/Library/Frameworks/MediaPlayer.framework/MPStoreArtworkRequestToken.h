/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class ICStoreArtworkInfo, ICStoreVideoArtworkInfo, NSString, NSURL;

@interface MPStoreArtworkRequestToken : NSObject <NSSecureCoding, MPArtworkDataSourceVisualIdenticality> {

	long long _artworkInfoType;
	ICStoreArtworkInfo* _imageArtworkInfo;
	ICStoreVideoArtworkInfo* _videoArtworkInfo;
	NSString* _cropStyle;
	NSString* _format;
	NSString* _sourceEditorialArtworkKind;
	NSURL* _artworkURL;

}

@property (assign,nonatomic) long long artworkInfoType;                             //@synthesize artworkInfoType=_artworkInfoType - In the implementation block
@property (nonatomic,copy) ICStoreArtworkInfo * imageArtworkInfo;                   //@synthesize imageArtworkInfo=_imageArtworkInfo - In the implementation block
@property (nonatomic,copy) ICStoreVideoArtworkInfo * videoArtworkInfo;              //@synthesize videoArtworkInfo=_videoArtworkInfo - In the implementation block
@property (nonatomic,copy) NSString * cropStyle;                                    //@synthesize cropStyle=_cropStyle - In the implementation block
@property (nonatomic,copy) NSString * format;                                       //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSString * sourceEditorialArtworkKind;                   //@synthesize sourceEditorialArtworkKind=_sourceEditorialArtworkKind - In the implementation block
@property (nonatomic,copy) NSURL * artworkURL;                                      //@synthesize artworkURL=_artworkURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)tokenWithImageArtworkInfo:(id)arg1 ;
+(id)tokenWithVideoArtworkInfo:(id)arg1 ;
-(void)setFormat:(NSString *)arg1 ;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(NSURL *)artworkURL;
-(NSString *)format;
-(id)stringRepresentation;
-(NSString *)cropStyle;
-(id)init;
-(NSString *)sourceEditorialArtworkKind;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSourceEditorialArtworkKind:(NSString *)arg1 ;
-(long long)artworkInfoType;
-(void)setVideoArtworkInfo:(ICStoreVideoArtworkInfo *)arg1 ;
-(void)setImageArtworkInfo:(ICStoreArtworkInfo *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCropStyle:(NSString *)arg1 ;
-(ICStoreVideoArtworkInfo *)videoArtworkInfo;
-(void)setArtworkInfoType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(ICStoreArtworkInfo *)imageArtworkInfo;
@end

