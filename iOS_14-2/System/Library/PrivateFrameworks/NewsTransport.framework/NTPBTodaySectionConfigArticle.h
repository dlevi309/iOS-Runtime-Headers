/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBTodaySectionConfigArticle : PBCodable <NSCopying> {

	NSString* _actionURLString;
	NSString* _articleID;
	NSString* _displayDateString;
	NTPBTodaySectionConfigArticle* _paidArticle;
	NSString* _storyType;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                                     //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayDateString; 
@property (nonatomic,retain) NSString * displayDateString;                             //@synthesize displayDateString=_displayDateString - In the implementation block
@property (nonatomic,readonly) BOOL hasStoryType; 
@property (nonatomic,retain) NSString * storyType;                                     //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasPaidArticle; 
@property (nonatomic,retain) NTPBTodaySectionConfigArticle * paidArticle;              //@synthesize paidArticle=_paidArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasActionURLString; 
@property (nonatomic,retain) NSString * actionURLString;                               //@synthesize actionURLString=_actionURLString - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)storyType;
-(BOOL)hasStoryType;
-(void)setActionURLString:(NSString *)arg1 ;
-(BOOL)hasTitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)articleID;
-(BOOL)hasArticleID;
-(id)description;
-(BOOL)hasActionURLString;
-(void)setArticleID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPaidArticle:(NTPBTodaySectionConfigArticle *)arg1 ;
-(void)setDisplayDateString:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)actionURLString;
-(void)setStoryType:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasDisplayDateString;
-(BOOL)hasPaidArticle;
-(NSString *)displayDateString;
-(NTPBTodaySectionConfigArticle *)paidArticle;
@end

