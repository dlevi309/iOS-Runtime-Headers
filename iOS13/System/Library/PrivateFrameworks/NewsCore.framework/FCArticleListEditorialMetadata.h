/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDate, NSDictionary;

@interface FCArticleListEditorialMetadata : NSObject {

	NSDate* _publishDate;
	NSDictionary* _articleMetadata;

}

@property (nonatomic,retain) NSDate * publishDate;                        //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,retain) NSDictionary * articleMetadata;              //@synthesize articleMetadata=_articleMetadata - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)publishDate;
-(void)setPublishDate:(NSDate *)arg1 ;
-(NSDictionary *)articleMetadata;
-(void)setArticleMetadata:(NSDictionary *)arg1 ;
@end

