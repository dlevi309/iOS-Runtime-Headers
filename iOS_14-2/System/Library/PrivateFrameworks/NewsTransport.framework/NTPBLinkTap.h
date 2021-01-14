/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBLinkTap : PBCodable <NSCopying> {

	NSString* _articleId;
	NSData* _articleViewingSessionId;
	int _groupType;
	int _linkType;
	NSString* _referencedArticleId;
	int _tapLocationType;
	NSString* _tappedLinkUrl;
	NSString* _webEmbedId;
	int _webEmbedLocation;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasTapLocationType; 
@property (assign,nonatomic) int tapLocationType;                            //@synthesize tapLocationType=_tapLocationType - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                           //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                 //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasTappedLinkUrl; 
@property (nonatomic,retain) NSString * tappedLinkUrl;                       //@synthesize tappedLinkUrl=_tappedLinkUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasWebEmbedId; 
@property (nonatomic,retain) NSString * webEmbedId;                          //@synthesize webEmbedId=_webEmbedId - In the implementation block
@property (assign,nonatomic) BOOL hasWebEmbedLocation; 
@property (assign,nonatomic) int webEmbedLocation;                           //@synthesize webEmbedLocation=_webEmbedLocation - In the implementation block
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) int linkType;                                   //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                  //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;               //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
-(id)groupTypeAsString:(int)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setGroupType:(int)arg1 ;
-(BOOL)hasArticleViewingSessionId;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(void)setHasGroupType:(BOOL)arg1 ;
-(BOOL)hasGroupType;
-(int)StringAsGroupType:(id)arg1 ;
-(NSData *)articleViewingSessionId;
-(void)setLinkType:(int)arg1 ;
-(BOOL)hasArticleId;
-(int)linkType;
-(NSString *)referencedArticleId;
-(void)setWebEmbedId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasWebEmbedId;
-(BOOL)hasReferencedArticleId;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasLinkType;
-(void)setHasLinkType:(BOOL)arg1 ;
-(id)description;
-(NSString *)articleId;
-(int)groupType;
-(unsigned long long)hash;
-(int)webEmbedLocation;
-(void)setWebEmbedLocation:(int)arg1 ;
-(void)setHasWebEmbedLocation:(BOOL)arg1 ;
-(BOOL)hasWebEmbedLocation;
-(id)webEmbedLocationAsString:(int)arg1 ;
-(NSString *)webEmbedId;
-(int)StringAsWebEmbedLocation:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)tapLocationType;
-(void)writeTo:(id)arg1 ;
-(void)setTappedLinkUrl:(NSString *)arg1 ;
-(void)setTapLocationType:(int)arg1 ;
-(void)setHasTapLocationType:(BOOL)arg1 ;
-(BOOL)hasTapLocationType;
-(BOOL)hasTappedLinkUrl;
-(NSString *)tappedLinkUrl;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

