/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT5 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)linkType;
-(void)setLinkType:(int)arg1 ;
-(int)groupType;
-(void)setGroupType:(int)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasArticleViewingSessionId;
-(NSString *)articleId;
-(NSData *)articleViewingSessionId;
-(void)setWebEmbedId:(NSString *)arg1 ;
-(int)webEmbedLocation;
-(void)setWebEmbedLocation:(int)arg1 ;
-(void)setHasWebEmbedLocation:(BOOL)arg1 ;
-(BOOL)hasWebEmbedLocation;
-(id)webEmbedLocationAsString:(int)arg1 ;
-(int)StringAsWebEmbedLocation:(id)arg1 ;
-(BOOL)hasWebEmbedId;
-(void)setHasGroupType:(BOOL)arg1 ;
-(BOOL)hasGroupType;
-(id)groupTypeAsString:(int)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(NSString *)webEmbedId;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(BOOL)hasReferencedArticleId;
-(NSString *)referencedArticleId;
-(void)setTappedLinkUrl:(NSString *)arg1 ;
-(int)tapLocationType;
-(void)setTapLocationType:(int)arg1 ;
-(void)setHasTapLocationType:(BOOL)arg1 ;
-(BOOL)hasTapLocationType;
-(BOOL)hasTappedLinkUrl;
-(void)setHasLinkType:(BOOL)arg1 ;
-(BOOL)hasLinkType;
-(NSString *)tappedLinkUrl;
@end

