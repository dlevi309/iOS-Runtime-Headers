/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCCoreConfiguration;
@class NSArray, NSDictionary;

@interface FCHeadlinesUpdateOperation : FCOperation {

	NSArray* _headlines;
	id<FCContentContext> _context;
	id<FCCoreConfiguration> _configuration;
	double _maxArticleAge;
	/*^block*/id _updateCompletion;
	NSDictionary* _resultHeadlinesByArticleID;

}

@property (nonatomic,copy) NSDictionary * resultHeadlinesByArticleID;              //@synthesize resultHeadlinesByArticleID=_resultHeadlinesByArticleID - In the implementation block
@property (nonatomic,copy) NSArray * headlines;                                    //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                  //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) double maxArticleAge;                                 //@synthesize maxArticleAge=_maxArticleAge - In the implementation block
@property (nonatomic,copy) id updateCompletion;                                    //@synthesize updateCompletion=_updateCompletion - In the implementation block
-(BOOL)validateOperation;
-(double)maxArticleAge;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(NSDictionary *)resultHeadlinesByArticleID;
-(id)init;
-(void)setHeadlines:(NSArray *)arg1 ;
-(void)setUpdateCompletion:(id)arg1 ;
-(id<FCContentContext>)context;
-(void)setMaxArticleAge:(double)arg1 ;
-(NSArray *)headlines;
-(id<FCCoreConfiguration>)configuration;
-(id)updateCompletion;
-(void)setResultHeadlinesByArticleID:(NSDictionary *)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

