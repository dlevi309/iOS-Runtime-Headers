/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBHeadlineAnalyticsElement : PBCodable <NSCopying> {

	long long _articleVersion;
	NSString* _articleID;
	NSString* _channelID;
	NSString* _preseenCountTrackingIdentifier;
	BOOL _needsSeenStateTracking;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                                   //@synthesize articleID=_articleID - In the implementation block
@property (assign,nonatomic) BOOL hasArticleVersion; 
@property (assign,nonatomic) long long articleVersion;                               //@synthesize articleVersion=_articleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNeedsSeenStateTracking; 
@property (assign,nonatomic) BOOL needsSeenStateTracking;                            //@synthesize needsSeenStateTracking=_needsSeenStateTracking - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelID; 
@property (nonatomic,retain) NSString * channelID;                                   //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) BOOL hasPreseenCountTrackingIdentifier; 
@property (nonatomic,retain) NSString * preseenCountTrackingIdentifier;              //@synthesize preseenCountTrackingIdentifier=_preseenCountTrackingIdentifier - In the implementation block
-(void)setChannelID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPreseenCountTrackingIdentifier:(NSString *)arg1 ;
-(void)setHasArticleVersion:(BOOL)arg1 ;
-(void)setNeedsSeenStateTracking:(BOOL)arg1 ;
-(void)setHasNeedsSeenStateTracking:(BOOL)arg1 ;
-(BOOL)hasNeedsSeenStateTracking;
-(BOOL)hasPreseenCountTrackingIdentifier;
-(BOOL)needsSeenStateTracking;
-(NSString *)preseenCountTrackingIdentifier;
-(long long)articleVersion;
-(void)setArticleVersion:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)articleID;
-(BOOL)hasChannelID;
-(BOOL)hasArticleID;
-(NSString *)channelID;
-(id)description;
-(BOOL)hasArticleVersion;
-(void)setArticleID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

