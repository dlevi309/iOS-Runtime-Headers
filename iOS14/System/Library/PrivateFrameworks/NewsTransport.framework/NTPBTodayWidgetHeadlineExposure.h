/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBAlternateHeadline, NSString;

@interface NTPBTodayWidgetHeadlineExposure : PBCodable <NSCopying> {

	NTPBAlternateHeadline* _alternateHeadline;
	NSString* _articleId;
	NSString* _sourceChannelId;
	NSString* _webEmbedId;
	int _widgetArticleCount;
	int _widgetArticleCountInSection;
	int _widgetArticleRank;
	int _widgetArticleRankInSection;
	int _widgetContentType;
	int _widgetSectionDisplayRank;
	NSString* _widgetSectionId;
	SCD_Struct_NT9 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                   //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                             //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetSectionId; 
@property (nonatomic,retain) NSString * widgetSectionId;                             //@synthesize widgetSectionId=_widgetSectionId - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSectionDisplayRank; 
@property (assign,nonatomic) int widgetSectionDisplayRank;                           //@synthesize widgetSectionDisplayRank=_widgetSectionDisplayRank - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleRankInSection; 
@property (assign,nonatomic) int widgetArticleRankInSection;                         //@synthesize widgetArticleRankInSection=_widgetArticleRankInSection - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleRank; 
@property (assign,nonatomic) int widgetArticleRank;                                  //@synthesize widgetArticleRank=_widgetArticleRank - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleCount; 
@property (assign,nonatomic) int widgetArticleCount;                                 //@synthesize widgetArticleCount=_widgetArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleCountInSection; 
@property (assign,nonatomic) int widgetArticleCountInSection;                        //@synthesize widgetArticleCountInSection=_widgetArticleCountInSection - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetContentType; 
@property (assign,nonatomic) int widgetContentType;                                  //@synthesize widgetContentType=_widgetContentType - In the implementation block
@property (nonatomic,readonly) BOOL hasWebEmbedId; 
@property (nonatomic,retain) NSString * webEmbedId;                                  //@synthesize webEmbedId=_webEmbedId - In the implementation block
@property (nonatomic,readonly) BOOL hasAlternateHeadline; 
@property (nonatomic,retain) NTPBAlternateHeadline * alternateHeadline;              //@synthesize alternateHeadline=_alternateHeadline - In the implementation block
-(BOOL)hasWidgetArticleRank;
-(void)setHasWidgetArticleRank:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(int)widgetArticleRank;
-(void)setWidgetArticleRank:(int)arg1 ;
-(BOOL)hasArticleId;
-(void)setWebEmbedId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasWebEmbedId;
-(void)setAlternateHeadline:(NTPBAlternateHeadline *)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(id)description;
-(NSString *)articleId;
-(NTPBAlternateHeadline *)alternateHeadline;
-(unsigned long long)hash;
-(BOOL)hasAlternateHeadline;
-(NSString *)webEmbedId;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setWidgetSectionId:(NSString *)arg1 ;
-(BOOL)hasWidgetSectionId;
-(void)setWidgetSectionDisplayRank:(int)arg1 ;
-(void)setHasWidgetSectionDisplayRank:(BOOL)arg1 ;
-(void)setWidgetArticleCount:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasWidgetSectionDisplayRank;
-(void)setWidgetArticleRankInSection:(int)arg1 ;
-(void)setHasWidgetArticleRankInSection:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleRankInSection;
-(void)setHasWidgetArticleCount:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleCount;
-(int)widgetContentType;
-(void)setWidgetArticleCountInSection:(int)arg1 ;
-(void)setHasWidgetArticleCountInSection:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleCountInSection;
-(void)setWidgetContentType:(int)arg1 ;
-(void)setHasWidgetContentType:(BOOL)arg1 ;
-(BOOL)hasWidgetContentType;
-(id)widgetContentTypeAsString:(int)arg1 ;
-(int)StringAsWidgetContentType:(id)arg1 ;
-(NSString *)widgetSectionId;
-(int)widgetSectionDisplayRank;
-(int)widgetArticleRankInSection;
-(int)widgetArticleCount;
-(int)widgetArticleCountInSection;
-(BOOL)isEqual:(id)arg1 ;
@end

