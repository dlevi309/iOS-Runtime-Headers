/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString, FCFeedGroup;

@interface FCArticleListGroupEmittingOperation : FCFeedGroupEmittingOperation {

	/*^block*/id _headlineFilter;
	NSString* _articleList;
	FCFeedGroup* _group;

}

@property (nonatomic,readonly) NSString * articleList;              //@synthesize articleList=_articleList - In the implementation block
@property (nonatomic,readonly) FCFeedGroup * group;                 //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) id headlineFilter;                       //@synthesize headlineFilter=_headlineFilter - In the implementation block
-(FCFeedGroup *)group;
-(void)performOperation;
-(NSString *)articleList;
-(id)initWithContext:(id)arg1 articleList:(id)arg2 group:(id)arg3 ;
-(id)headlineFilter;
-(void)setHeadlineFilter:(id)arg1 ;
@end

