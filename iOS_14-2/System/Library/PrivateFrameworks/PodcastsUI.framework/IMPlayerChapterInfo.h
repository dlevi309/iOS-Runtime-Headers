/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/


#import <PodcastsUI/PodcastsUI-Structs.h>
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
	SCD_Struct_IM9 _mediaTimeRange;
	SCD_Struct_IM9 _assetTimeRange;

}

@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * externalURL;                        //@synthesize externalURL=_externalURL - In the implementation block
@property (nonatomic,readonly) UIImage * artwork; 
@property (nonatomic,retain) NSData * artworkData;                       //@synthesize artworkData=_artworkData - In the implementation block
@property (assign,nonatomic) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double time;                                //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM9 mediaTimeRange;              //@synthesize mediaTimeRange=_mediaTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM9 assetTimeRange;              //@synthesize assetTimeRange=_assetTimeRange - In the implementation block
@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int metadataType;                           //@synthesize metadataType=_metadataType - In the implementation block
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setArtworkData:(NSData *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(void)setMetadataType:(int)arg1 ;
-(UIImage *)artwork;
-(NSData *)artworkData;
-(int)type;
-(unsigned long long)hash;
-(double)duration;
-(NSURL *)externalURL;
-(int)metadataType;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(SCD_Struct_IM9)mediaTimeRange;
-(SCD_Struct_IM9)assetTimeRange;
-(void)setExternalURL:(NSURL *)arg1 ;
-(void)setMediaTimeRange:(SCD_Struct_IM9)arg1 ;
-(void)setAssetTimeRange:(SCD_Struct_IM9)arg1 ;
@end

