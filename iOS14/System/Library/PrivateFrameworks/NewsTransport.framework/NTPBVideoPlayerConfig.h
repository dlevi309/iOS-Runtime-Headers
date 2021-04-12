/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBVideoPlayerConfig : PBCodable <NSCopying> {

	NSString* _discoverMoreVideosSubtitle;
	NSString* _discoverMoreVideosTitle;
	NSString* _discoverMoreVideosUrl;

}

@property (nonatomic,readonly) BOOL hasDiscoverMoreVideosTitle; 
@property (nonatomic,retain) NSString * discoverMoreVideosTitle;                 //@synthesize discoverMoreVideosTitle=_discoverMoreVideosTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasDiscoverMoreVideosSubtitle; 
@property (nonatomic,retain) NSString * discoverMoreVideosSubtitle;              //@synthesize discoverMoreVideosSubtitle=_discoverMoreVideosSubtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasDiscoverMoreVideosUrl; 
@property (nonatomic,retain) NSString * discoverMoreVideosUrl;                   //@synthesize discoverMoreVideosUrl=_discoverMoreVideosUrl - In the implementation block
-(id)dictionaryRepresentation;
-(void)setDiscoverMoreVideosTitle:(NSString *)arg1 ;
-(void)setDiscoverMoreVideosSubtitle:(NSString *)arg1 ;
-(void)setDiscoverMoreVideosUrl:(NSString *)arg1 ;
-(BOOL)hasDiscoverMoreVideosTitle;
-(BOOL)hasDiscoverMoreVideosUrl;
-(BOOL)hasDiscoverMoreVideosSubtitle;
-(NSString *)discoverMoreVideosTitle;
-(NSString *)discoverMoreVideosSubtitle;
-(NSString *)discoverMoreVideosUrl;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

