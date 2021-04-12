/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, SDRDiagnosticReporter;

@interface BiometricAutoBugCapture : NSObject {

	BOOL _serialLogEnabled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _domain;
	NSString* _process;
	SDRDiagnosticReporter* _reporter;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSString * domain;                                         //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * process;                                        //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) SDRDiagnosticReporter * reporter;                        //@synthesize reporter=_reporter - In the implementation block
@property (nonatomic,readonly) BOOL serialLogEnabled;                                   //@synthesize serialLogEnabled=_serialLogEnabled - In the implementation block
-(NSString *)domain;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)process;
-(void)setProcess:(NSString *)arg1 ;
-(SDRDiagnosticReporter *)reporter;
-(id)getTypeForReason:(unsigned long long)arg1 ;
-(id)getSubtypeForReason:(unsigned long long)arg1 ;
-(id)getSignatureWithType:(id)arg1 subtype:(id)arg2 ;
-(id)getSignatureForReason:(unsigned long long)arg1 ;
-(BOOL)sendSignature:(id)arg1 withDuration:(double)arg2 ;
-(id)initWithDomain:(id)arg1 process:(id)arg2 dispatchQueue:(id)arg3 ;
-(BOOL)sendAutoBugCaptureEvent:(unsigned long long)arg1 ;
-(BOOL)serialLogEnabled;
@end

