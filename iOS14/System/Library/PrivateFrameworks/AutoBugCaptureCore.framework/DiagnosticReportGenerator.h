/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@protocol OS_dispatch_queue, DiagnosticReportGeneratorDelegate;
@class NSObject, DiagnosticCase;

@interface DiagnosticReportGenerator : NSObject {

	BOOL _reportGenerated;
	NSObject*<OS_dispatch_queue> _queue;
	double _timeoutSeconds;
	id<DiagnosticReportGeneratorDelegate> _delegate;
	DiagnosticCase* _diagCase;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double timeoutSeconds;                                              //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (assign,nonatomic) BOOL reportGenerated;                                               //@synthesize reportGenerated=_reportGenerated - In the implementation block
@property (assign,nonatomic,__weak) id<DiagnosticReportGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) DiagnosticCase * diagCase;                                          //@synthesize diagCase=_diagCase - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                 //@synthesize completionHandler=_completionHandler - In the implementation block
-(double)timeoutSeconds;
-(id)initWithQueue:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id<DiagnosticReportGeneratorDelegate>)delegate;
-(id)completionHandler;
-(void)setDelegate:(id<DiagnosticReportGeneratorDelegate>)arg1 ;
-(void)setDefaults;
-(void)setTimeoutSeconds:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(DiagnosticCase *)diagCase;
-(void)setDiagCase:(DiagnosticCase *)arg1 ;
-(BOOL)generateReportForCase:(id)arg1 reportName:(id)arg2 ;
-(BOOL)generateReportForCase:(id)arg1 reportName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)startReportGeneration;
-(BOOL)reportGenerated;
-(void)setReportGenerated:(BOOL)arg1 ;
@end

