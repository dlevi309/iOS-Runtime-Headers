/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


#import <SpotlightDaemon/SpotlightDaemon-Structs.h>
@class NSString, SPQueryResultsQueue;

@interface SPQueryJob : NSObject {

	SIJobRefRef _siJob;
	NSString* _dataclass;
	SPQueryResultsQueue* _resultsQueue;
	/*^block*/id _resultsHandler;

}

@property (assign,nonatomic) SIJobRefRef siJob;                                      //@synthesize siJob=_siJob - In the implementation block
@property (nonatomic,retain) NSString * dataclass;                                   //@synthesize dataclass=_dataclass - In the implementation block
@property (assign,nonatomic,__weak) SPQueryResultsQueue * resultsQueue;              //@synthesize resultsQueue=_resultsQueue - In the implementation block
@property (nonatomic,copy) id resultsHandler;                                        //@synthesize resultsHandler=_resultsHandler - In the implementation block
-(void)dealloc;
-(void)cancel;
-(id)resultsHandler;
-(void)setResultsHandler:(id)arg1 ;
-(SPQueryResultsQueue *)resultsQueue;
-(void)setResultsQueue:(SPQueryResultsQueue *)arg1 ;
-(NSString *)dataclass;
-(void)setDataclass:(NSString *)arg1 ;
-(id)initWithSIJob:(SIJobRefRef)arg1 dataclass:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 ;
-(SIJobRefRef)siJob;
-(void)setSiJob:(SIJobRefRef)arg1 ;
@end

