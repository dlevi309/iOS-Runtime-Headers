/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/OSLogPersistenceDelegate.h>
#import <libobjc.A.dylib/OSActivityStreamDelegate.h>

@class NSDate, NSString, OSLogPersistence, OSActivityStream, NSMutableArray;

@interface CKLLog : NSObject <OSLogPersistenceDelegate, OSActivityStreamDelegate> {

	BOOL _wantsSimulatorLogs;
	BOOL _colorOutput;
	double _startTimeOffset;
	NSDate* _absoluteStartDate;
	NSString* _processName;
	unsigned long long _source;
	OSLogPersistence* _archiveSource;
	OSActivityStream* _streamSource;
	NSMutableArray* _streamObservers;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic) unsigned long long source;                     //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) OSLogPersistence * archiveSource;              //@synthesize archiveSource=_archiveSource - In the implementation block
@property (nonatomic,retain) OSActivityStream * streamSource;               //@synthesize streamSource=_streamSource - In the implementation block
@property (nonatomic,retain) NSMutableArray * streamObservers;              //@synthesize streamObservers=_streamObservers - In the implementation block
@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL wantsSimulatorLogs;                       //@synthesize wantsSimulatorLogs=_wantsSimulatorLogs - In the implementation block
@property (assign,nonatomic) double startTimeOffset;                        //@synthesize startTimeOffset=_startTimeOffset - In the implementation block
@property (nonatomic,retain) NSDate * absoluteStartDate;                    //@synthesize absoluteStartDate=_absoluteStartDate - In the implementation block
@property (nonatomic,retain) NSString * processName;                        //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) BOOL colorOutput;                              //@synthesize colorOutput=_colorOutput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSource:(unsigned long long)arg1 ;
-(id)_init;
-(unsigned long long)source;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)streamDidStop:(id)arg1 ;
-(BOOL)activityStream:(id)arg1 results:(id)arg2 ;
-(void)streamDidFail:(id)arg1 error:(id)arg2 ;
-(void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)persistence:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(BOOL)colorOutput;
-(void)setColorOutput:(BOOL)arg1 ;
-(void)_configureStreamSource:(id)arg1 ;
-(NSMutableArray *)streamObservers;
-(BOOL)wantsSimulatorLogs;
-(NSDate *)absoluteStartDate;
-(double)startTimeOffset;
-(OSLogPersistence *)archiveSource;
-(OSActivityStream *)streamSource;
-(id)initForHostStream;
-(id)initWithRemoteDevice:(id)arg1 ;
-(id)initWithArchiveAtURL:(id)arg1 ;
-(void)addStreamObserver:(id)arg1 ;
-(void)streamLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)setWantsSimulatorLogs:(BOOL)arg1 ;
-(void)setStartTimeOffset:(double)arg1 ;
-(void)setAbsoluteStartDate:(NSDate *)arg1 ;
-(void)setArchiveSource:(OSLogPersistence *)arg1 ;
-(void)setStreamSource:(OSActivityStream *)arg1 ;
-(void)setStreamObservers:(NSMutableArray *)arg1 ;
@end

