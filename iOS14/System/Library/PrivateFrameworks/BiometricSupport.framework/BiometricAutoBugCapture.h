/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)process;
-(void)setProcess:(NSString *)arg1 ;
-(id)getSubtypeForReason:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)sendAutoBugCaptureEvent:(unsigned long long)arg1 ;
-(NSString *)domain;
-(id)getSignatureForReason:(unsigned long long)arg1 ;
-(id)getSignatureWithType:(id)arg1 subtype:(id)arg2 ;
-(SDRDiagnosticReporter *)reporter;
-(id)getTypeForReason:(unsigned long long)arg1 ;
-(BOOL)serialLogEnabled;
-(id)initWithDomain:(id)arg1 process:(id)arg2 dispatchQueue:(id)arg3 ;
-(BOOL)sendSignature:(id)arg1 withDuration:(double)arg2 ;
@end

