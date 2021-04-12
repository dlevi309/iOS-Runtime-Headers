/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)dataclass;
-(void)setDataclass:(NSString *)arg1 ;
-(void)setResultsQueue:(SPQueryResultsQueue *)arg1 ;
-(SIJobRefRef)siJob;
-(SPQueryResultsQueue *)resultsQueue;
-(id)resultsHandler;
-(id)initWithSIJob:(SIJobRefRef)arg1 dataclass:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 ;
-(void)setResultsHandler:(id)arg1 ;
-(void)setSiJob:(SIJobRefRef)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

