/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


#import <PodcastsKit/PodcastsKit-Structs.h>
@class UIImage, NSString, NSURL, NSData;

@interface IMPlayerChapterInfo : NSObject {

	UIImage* _artwork;
	int _type;
	int _metadataType;
	NSString* _title;
	NSURL* _externalURL;
	NSData* _artworkData;
	double _duration;
	double _time;
	SCD_Struct_IM10 _mediaTimeRange;
	SCD_Struct_IM10 _assetTimeRange;

}

@property (nonatomic,retain) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * externalURL;                         //@synthesize externalURL=_externalURL - In the implementation block
@property (nonatomic,readonly) UIImage * artwork; 
@property (nonatomic,retain) NSData * artworkData;                        //@synthesize artworkData=_artworkData - In the implementation block
@property (assign,nonatomic) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double time;                                 //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM10 mediaTimeRange;              //@synthesize mediaTimeRange=_mediaTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM10 assetTimeRange;              //@synthesize assetTimeRange=_assetTimeRange - In the implementation block
@property (assign,nonatomic) int type;                                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int metadataType;                            //@synthesize metadataType=_metadataType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(double)duration;
-(double)time;
-(void)setTime:(double)arg1 ;
-(int)metadataType;
-(void)setDuration:(double)arg1 ;
-(UIImage *)artwork;
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
-(NSURL *)externalURL;
-(void)setMetadataType:(int)arg1 ;
-(void)setExternalURL:(NSURL *)arg1 ;
-(void)setMediaTimeRange:(SCD_Struct_IM10)arg1 ;
-(void)setAssetTimeRange:(SCD_Struct_IM10)arg1 ;
-(SCD_Struct_IM10)mediaTimeRange;
-(SCD_Struct_IM10)assetTimeRange;
@end

