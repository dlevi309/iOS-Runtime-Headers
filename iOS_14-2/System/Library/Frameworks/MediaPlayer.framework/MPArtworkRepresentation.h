/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIImage, AVAsset;

@interface MPArtworkRepresentation : NSObject {

	long long _kind;
	UIImage* _image;
	AVAsset* _video;
	id _representationToken;
	CGSize _representationSize;

}

@property (assign,nonatomic) long long kind;                         //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) AVAsset * video;                        //@synthesize video=_video - In the implementation block
@property (assign,nonatomic) CGSize representationSize;              //@synthesize representationSize=_representationSize - In the implementation block
@property (nonatomic,retain) id representationToken;                 //@synthesize representationToken=_representationToken - In the implementation block
+(id)representationWithSize:(CGSize)arg1 image:(id)arg2 ;
+(id)representationWithSize:(CGSize)arg1 video:(id)arg2 ;
-(id)debugQuickLookObject;
-(void)setVideo:(AVAsset *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)representationToken;
-(void)setRepresentationSize:(CGSize)arg1 ;
-(AVAsset *)video;
-(UIImage *)image;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(CGSize)representationSize;
-(void)setRepresentationToken:(id)arg1 ;
@end

