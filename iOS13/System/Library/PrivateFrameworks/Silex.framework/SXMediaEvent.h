/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSString, NSDictionary;

@interface SXMediaEvent : SXAnalyticsEvent {

	unsigned long long _mediaType;
	unsigned long long _galleryType;
	unsigned long long _videoType;
	NSString* _mediaId;
	NSString* _componentIdentifier;
	NSString* _componentType;
	NSString* _componentRole;
	NSDictionary* _metaData;

}

@property (assign,nonatomic) unsigned long long mediaType;                //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) unsigned long long galleryType;              //@synthesize galleryType=_galleryType - In the implementation block
@property (assign,nonatomic) unsigned long long videoType;                //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,retain) NSString * mediaId;                          //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,retain) NSString * componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (nonatomic,retain) NSString * componentType;                    //@synthesize componentType=_componentType - In the implementation block
@property (nonatomic,retain) NSString * componentRole;                    //@synthesize componentRole=_componentRole - In the implementation block
@property (nonatomic,retain) NSDictionary * metaData;                     //@synthesize metaData=_metaData - In the implementation block
-(unsigned long long)mediaType;
-(NSString *)componentType;
-(void)setComponentType:(NSString *)arg1 ;
-(NSDictionary *)metaData;
-(void)setMetaData:(NSDictionary *)arg1 ;
-(void)setMediaType:(unsigned long long)arg1 ;
-(NSString *)componentIdentifier;
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(void)setMediaId:(NSString *)arg1 ;
-(unsigned long long)galleryType;
-(void)setGalleryType:(unsigned long long)arg1 ;
-(NSString *)mediaId;
-(unsigned long long)videoType;
-(void)setVideoType:(unsigned long long)arg1 ;
-(void)setComponentRole:(NSString *)arg1 ;
-(NSString *)componentRole;
@end

