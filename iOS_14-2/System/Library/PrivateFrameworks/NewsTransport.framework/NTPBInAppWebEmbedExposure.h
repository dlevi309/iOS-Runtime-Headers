/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBInAppWebEmbedExposure : PBCodable <NSCopying> {

	int _articleDisplayRankInGroup;
	NSString* _articleId;
	int _displayRank;
	int _feedType;
	NSData* _feedViewExposureId;
	int _groupType;
	int _moduleEventType;
	NSData* _moduleExposureId;
	int _moduleItemCount;
	int _moduleItemPosition;
	int _moduleLocation;
	NSString* _webEmbedId;
	int _webEmbedLocation;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasModuleEventType; 
@property (assign,nonatomic) int moduleEventType;                            //@synthesize moduleEventType=_moduleEventType - In the implementation block
@property (assign,nonatomic) BOOL hasModuleLocation; 
@property (assign,nonatomic) int moduleLocation;                             //@synthesize moduleLocation=_moduleLocation - In the implementation block
@property (assign,nonatomic) BOOL hasModuleItemCount; 
@property (assign,nonatomic) int moduleItemCount;                            //@synthesize moduleItemCount=_moduleItemCount - In the implementation block
@property (nonatomic,readonly) BOOL hasModuleExposureId; 
@property (nonatomic,retain) NSData * moduleExposureId;                      //@synthesize moduleExposureId=_moduleExposureId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                    //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasWebEmbedLocation; 
@property (assign,nonatomic) int webEmbedLocation;                           //@synthesize webEmbedLocation=_webEmbedLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                           //@synthesize articleId=_articleId - In the implementation block
@property (assign,nonatomic) BOOL hasModuleItemPosition; 
@property (assign,nonatomic) int moduleItemPosition;                         //@synthesize moduleItemPosition=_moduleItemPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasWebEmbedId; 
@property (nonatomic,retain) NSString * webEmbedId;                          //@synthesize webEmbedId=_webEmbedId - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                  //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                   //@synthesize feedType=_feedType - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayRank; 
@property (assign,nonatomic) int displayRank;                                //@synthesize displayRank=_displayRank - In the implementation block
@property (assign,nonatomic) BOOL hasArticleDisplayRankInGroup; 
@property (assign,nonatomic) int articleDisplayRankInGroup;                  //@synthesize articleDisplayRankInGroup=_articleDisplayRankInGroup - In the implementation block
-(id)groupTypeAsString:(int)arg1 ;
-(id)moduleEventTypeAsString:(int)arg1 ;
-(void)setHasModuleEventType:(BOOL)arg1 ;
-(int)moduleLocation;
-(int)displayRank;
-(void)setHasModuleLocation:(BOOL)arg1 ;
-(int)moduleItemCount;
-(int)moduleEventType;
-(BOOL)hasFeedViewExposureId;
-(id)dictionaryRepresentation;
-(void)setGroupType:(int)arg1 ;
-(int)feedType;
-(void)setModuleExposureId:(NSData *)arg1 ;
-(void)setHasGroupType:(BOOL)arg1 ;
-(BOOL)hasGroupType;
-(int)StringAsGroupType:(id)arg1 ;
-(NSData *)feedViewExposureId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(void)setDisplayRank:(int)arg1 ;
-(BOOL)hasModuleLocation;
-(BOOL)hasArticleId;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)setHasArticleDisplayRankInGroup:(BOOL)arg1 ;
-(void)setArticleDisplayRankInGroup:(int)arg1 ;
-(void)setModuleEventType:(int)arg1 ;
-(void)setWebEmbedId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)moduleItemPosition;
-(BOOL)hasWebEmbedId;
-(BOOL)hasModuleExposureId;
-(void)setArticleId:(NSString *)arg1 ;
-(id)description;
-(int)StringAsModuleEventType:(id)arg1 ;
-(NSString *)articleId;
-(void)setHasDisplayRank:(BOOL)arg1 ;
-(BOOL)hasDisplayRank;
-(void)setModuleItemCount:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(BOOL)hasModuleItemPosition;
-(void)setHasFeedType:(BOOL)arg1 ;
-(void)setModuleLocation:(int)arg1 ;
-(void)setModuleItemPosition:(int)arg1 ;
-(NSData *)moduleExposureId;
-(int)groupType;
-(unsigned long long)hash;
-(int)webEmbedLocation;
-(void)setWebEmbedLocation:(int)arg1 ;
-(void)setHasWebEmbedLocation:(BOOL)arg1 ;
-(BOOL)hasWebEmbedLocation;
-(id)webEmbedLocationAsString:(int)arg1 ;
-(BOOL)hasModuleItemCount;
-(NSString *)webEmbedId;
-(int)StringAsWebEmbedLocation:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasModuleItemCount:(BOOL)arg1 ;
-(BOOL)hasArticleDisplayRankInGroup;
-(BOOL)hasFeedType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasModuleItemPosition:(BOOL)arg1 ;
-(BOOL)hasModuleEventType;
-(id)moduleLocationAsString:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)StringAsModuleLocation:(id)arg1 ;
-(int)articleDisplayRankInGroup;
@end

