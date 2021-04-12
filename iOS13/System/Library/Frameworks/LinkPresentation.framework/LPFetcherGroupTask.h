/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(LPFetcherResponse *)response;
-(void)setResponse:(LPFetcherResponse *)arg1 ;
-(BOOL)hasStarted;
-(void)setHasStarted:(BOOL)arg1 ;
-(LPFetcher *)fetcher;
-(void)setFetcher:(LPFetcher *)arg1 ;
@end

