/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@class NSString, NSArray, NSDictionary;

@interface TSPrefetchedArticlesFetchResult : NSObject {

	 selectedArticleID;
	 articleIDs;
	 prefetchedHeadlines;

}

@property (readonly,nonatomic) NSString * selectedArticleID; 
@property (readonly,nonatomic) NSArray * articleIDs; 
@property (readonly,nonatomic) NSDictionary * prefetchedHeadlines; 
-(id)init;
-(NSArray *)articleIDs;
-(NSString *)selectedArticleID;
-(NSDictionary *)prefetchedHeadlines;
-(id)initWithSelectedArticleID:(id)arg1 articleIDs:(id)arg2 prefetchedHeadlines:(id)arg3 ;
@end

