/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)discoverMoreVideosTitle;
-(NSString *)discoverMoreVideosSubtitle;
-(void)setDiscoverMoreVideosTitle:(NSString *)arg1 ;
-(void)setDiscoverMoreVideosSubtitle:(NSString *)arg1 ;
-(void)setDiscoverMoreVideosUrl:(NSString *)arg1 ;
-(BOOL)hasDiscoverMoreVideosTitle;
-(BOOL)hasDiscoverMoreVideosSubtitle;
-(BOOL)hasDiscoverMoreVideosUrl;
-(NSString *)discoverMoreVideosUrl;
@end

