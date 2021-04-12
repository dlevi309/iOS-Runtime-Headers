/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedPersonalizing;
@class NSMapTable, NSString;

@interface FCFeedTransformationPersonalizedSort : NSObject <FCFeedTransforming> {

	id<FCFeedPersonalizing> _feedPersonalizer;
	NSMapTable* _feedItemScores;
	long long _sortOptions;
	long long _configurationSet;

}

@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;              //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (nonatomic,retain) NSMapTable * feedItemScores;                           //@synthesize feedItemScores=_feedItemScores - In the implementation block
@property (assign,nonatomic) long long sortOptions;                                 //@synthesize sortOptions=_sortOptions - In the implementation block
@property (assign,nonatomic) long long configurationSet;                            //@synthesize configurationSet=_configurationSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithPersonalizer:(id)arg1 ;
+(id)transformationWithPersonalizer:(id)arg1 configurationSet:(long long)arg2 ;
+(id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2 sortOptions:(long long)arg3 configurationSet:(long long)arg4 ;
+(id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2 sortOptions:(long long)arg3 ;
+(id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2 ;
+(id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(id)transformHeadlines:(id)arg1 ;
-(void)setFeedItemScores:(NSMapTable *)arg1 ;
-(void)setConfigurationSet:(long long)arg1 ;
-(NSMapTable *)feedItemScores;
-(long long)configurationSet;
-(id)personalizedHeadlines:(id)arg1 ;
-(void)setSortOptions:(long long)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(long long)sortOptions;
@end

