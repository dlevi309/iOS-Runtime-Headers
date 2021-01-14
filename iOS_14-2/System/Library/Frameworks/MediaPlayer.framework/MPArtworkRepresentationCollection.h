/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPArtworkRepresentation;

@interface MPArtworkRepresentationCollection : NSObject {

	MPArtworkRepresentation* _imageRepresentation;
	MPArtworkRepresentation* _videoRepresentation;
	unsigned long long _bestRepresentationKinds;

}

@property (nonatomic,retain) MPArtworkRepresentation * imageRepresentation;              //@synthesize imageRepresentation=_imageRepresentation - In the implementation block
@property (nonatomic,retain) MPArtworkRepresentation * videoRepresentation;              //@synthesize videoRepresentation=_videoRepresentation - In the implementation block
@property (assign,nonatomic) unsigned long long bestRepresentationKinds;                 //@synthesize bestRepresentationKinds=_bestRepresentationKinds - In the implementation block
+(id)collectionWithImageRepresentation:(id)arg1 videoRepresentation:(id)arg2 bestRepresentationKinds:(unsigned long long)arg3 ;
+(id)collectionWithImageRepresentation:(id)arg1 videoRepresentation:(id)arg2 ;
-(void)resetForRepresentationKinds:(unsigned long long)arg1 ;
-(MPArtworkRepresentation *)imageRepresentation;
-(void)setVideoRepresentation:(MPArtworkRepresentation *)arg1 ;
-(MPArtworkRepresentation *)videoRepresentation;
-(void)setImageRepresentation:(MPArtworkRepresentation *)arg1 ;
-(void)setBestRepresentationKinds:(unsigned long long)arg1 ;
-(unsigned long long)bestRepresentationKinds;
-(BOOL)isBestRepresentationForKind:(long long)arg1 ;
@end

