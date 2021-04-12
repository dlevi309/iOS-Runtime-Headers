/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/


@class SPUISearchViewController, NSString;

@interface SPUIPPTTypingHelper : NSObject {

	double _timeSinceLastFire;
	SPUISearchViewController* _searchViewController;
	NSString* _queryString;
	NSString* _currentQueryString;
	/*^block*/id _completion;

}

@property (assign) double timeSinceLastFire;                                     //@synthesize timeSinceLastFire=_timeSinceLastFire - In the implementation block
@property (retain) SPUISearchViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
@property (retain) NSString * queryString;                                       //@synthesize queryString=_queryString - In the implementation block
@property (retain) NSString * currentQueryString;                                //@synthesize currentQueryString=_currentQueryString - In the implementation block
@property (copy) id completion;                                                  //@synthesize completion=_completion - In the implementation block
-(void)fire:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(SPUISearchViewController *)searchViewController;
-(void)setSearchViewController:(SPUISearchViewController *)arg1 ;
-(void)setCurrentQueryString:(NSString *)arg1 ;
-(void)setTimeSinceLastFire:(double)arg1 ;
-(double)timeSinceLastFire;
-(NSString *)currentQueryString;
-(id)initWithString:(id)arg1 viewController:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

