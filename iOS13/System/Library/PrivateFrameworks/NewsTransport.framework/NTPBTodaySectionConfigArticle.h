/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBTodaySectionConfigArticle : PBCodable <NSCopying> {

	NSString* _articleID;
	NSString* _displayDateString;
	NSString* _storyType;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                      //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayDateString; 
@property (nonatomic,retain) NSString * displayDateString;              //@synthesize displayDateString=_displayDateString - In the implementation block
@property (nonatomic,readonly) BOOL hasStoryType; 
@property (nonatomic,retain) NSString * storyType;                      //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTitle;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(NSString *)storyType;
-(void)setStoryType:(NSString *)arg1 ;
-(void)setDisplayDateString:(NSString *)arg1 ;
-(BOOL)hasArticleID;
-(BOOL)hasDisplayDateString;
-(BOOL)hasStoryType;
-(NSString *)displayDateString;
@end

