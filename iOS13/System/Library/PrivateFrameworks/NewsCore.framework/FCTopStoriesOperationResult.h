/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray, NSDate, NSDictionary, FCColorGradient, NSString;

@interface FCTopStoriesOperationResult : NSObject {

	NSArray* _mandatoryHeadlinePairs;
	NSArray* _optionalHeadlines;
	NSArray* _todayFeedTopStoriesHeadlines;
	NSDate* _publishDate;
	NSDictionary* _topStoriesMetadataByArticleID;
	FCColorGradient* _backgroundColorGradient;
	FCColorGradient* _darkStyleBackgroundColorGradient;
	NSString* _subtitle;

}

@property (copy) NSArray * mandatoryHeadlinePairs;                                                   //@synthesize mandatoryHeadlinePairs=_mandatoryHeadlinePairs - In the implementation block
@property (copy) NSArray * optionalHeadlines;                                                        //@synthesize optionalHeadlines=_optionalHeadlines - In the implementation block
@property (copy) NSDictionary * topStoriesMetadataByArticleID;                                       //@synthesize topStoriesMetadataByArticleID=_topStoriesMetadataByArticleID - In the implementation block
@property (copy) NSDate * publishDate;                                                               //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,copy) FCColorGradient * backgroundColorGradient;                                //@synthesize backgroundColorGradient=_backgroundColorGradient - In the implementation block
@property (nonatomic,copy,readonly) NSArray * todayFeedTopStoriesHeadlines;                          //@synthesize todayFeedTopStoriesHeadlines=_todayFeedTopStoriesHeadlines - In the implementation block
@property (nonatomic,copy,readonly) FCColorGradient * darkStyleBackgroundColorGradient;              //@synthesize darkStyleBackgroundColorGradient=_darkStyleBackgroundColorGradient - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                             //@synthesize subtitle=_subtitle - In the implementation block
-(NSString *)subtitle;
-(NSDate *)publishDate;
-(void)setPublishDate:(NSDate *)arg1 ;
-(FCColorGradient *)backgroundColorGradient;
-(FCColorGradient *)darkStyleBackgroundColorGradient;
-(NSArray *)todayFeedTopStoriesHeadlines;
-(NSDictionary *)topStoriesMetadataByArticleID;
-(void)setTopStoriesMetadataByArticleID:(NSDictionary *)arg1 ;
-(NSArray *)mandatoryHeadlinePairs;
-(NSArray *)optionalHeadlines;
-(id)initWithTopStoriesGroupConfig:(id)arg1 mandatoryHeadlinePairs:(id)arg2 optionalHeadlines:(id)arg3 todayFeedTopStoriesHeadlines:(id)arg4 topStoriesMetadataByArticleID:(id)arg5 publishDate:(id)arg6 subtitle:(id)arg7 ;
-(void)setMandatoryHeadlinePairs:(NSArray *)arg1 ;
-(void)setOptionalHeadlines:(NSArray *)arg1 ;
-(void)setBackgroundColorGradient:(FCColorGradient *)arg1 ;
@end

