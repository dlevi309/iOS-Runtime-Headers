/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPFetcher, LPFetcherResponse;

@interface LPFetcherGroupTask : NSObject {

	BOOL _hasStarted;
	LPFetcher* _fetcher;
	LPFetcherResponse* _response;

}

@property (nonatomic,retain) LPFetcher * fetcher;                       //@synthesize fetcher=_fetcher - In the implementation block
@property (nonatomic,retain) LPFetcherResponse * response;              //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) BOOL hasStarted;                           //@synthesize hasStarted=_hasStarted - In the implementation block
-(void)setHasStarted:(BOOL)arg1 ;
-(LPFetcher *)fetcher;
-(void)setFetcher:(LPFetcher *)arg1 ;
-(BOOL)hasStarted;
-(LPFetcherResponse *)response;
-(void)setResponse:(LPFetcherResponse *)arg1 ;
@end

