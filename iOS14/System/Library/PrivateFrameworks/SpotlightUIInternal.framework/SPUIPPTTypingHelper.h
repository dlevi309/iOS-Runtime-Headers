/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/


@class SPUISearchViewController, NSString;

@interface SPUIPPTTypingHelper : NSObject {

	double _timeSinceLastFire;
	SPUISearchViewController* _searchViewController;
	NSString* _queryString;
	NSString* _currentQueryString;
	unsigned long long _queryKind;
	/*^block*/id _completion;

}

@property (assign) double timeSinceLastFire;                                     //@synthesize timeSinceLastFire=_timeSinceLastFire - In the implementation block
@property (retain) SPUISearchViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
@property (retain) NSString * queryString;                                       //@synthesize queryString=_queryString - In the implementation block
@property (retain) NSString * currentQueryString;                                //@synthesize currentQueryString=_currentQueryString - In the implementation block
@property (assign) unsigned long long queryKind;                                 //@synthesize queryKind=_queryKind - In the implementation block
@property (copy) id completion;                                                  //@synthesize completion=_completion - In the implementation block
-(SPUISearchViewController *)searchViewController;
-(void)setCompletion:(id)arg1 ;
-(void)setSearchViewController:(SPUISearchViewController *)arg1 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(id)completion;
-(void)setQueryKind:(unsigned long long)arg1 ;
-(void)fire:(id)arg1 ;
-(unsigned long long)queryKind;
-(void)setCurrentQueryString:(NSString *)arg1 ;
-(void)setTimeSinceLastFire:(double)arg1 ;
-(double)timeSinceLastFire;
-(NSString *)currentQueryString;
-(id)initWithString:(id)arg1 viewController:(id)arg2 queryKind:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
@end

