/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@protocol OS_dispatch_queue;
@class ENExposureDetectionSummary, NSMutableArray, NSMutableDictionary, ENExposureConfiguration, NSObject, NSArray, ENManager, NSProgress;

@interface ENExposureDetectionClientSession : NSObject <CUXPCCodable> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _guardActivateDone;
	BOOL _guardAddFileDone;
	BOOL _guardFinishDone;
	int _runState;
	ENExposureDetectionSummary* _summary;
	NSMutableArray* _mainFileURLs;
	unsigned long long _mainFileIndex;
	unsigned long long _mainFileCount;
	NSMutableDictionary* _signatureURLMap;
	/*^block*/id _completionHandler;
	ENExposureConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _diagnosisKeyURLs;
	ENManager* _manager;
	NSProgress* _progress;

}

@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) ENExposureConfiguration * configuration;                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSArray * diagnosisKeyURLs;                                //@synthesize diagnosisKeyURLs=_diagnosisKeyURLs - In the implementation block
@property (nonatomic,retain) ENManager * manager;                                     //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                   //@synthesize progress=_progress - In the implementation block
-(void)_run;
-(NSProgress *)progress;
-(void)encodeWithXPCObject:(id)arg1 ;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setManager:(ENManager *)arg1 ;
-(void)_reportError:(id)arg1 where:(const char*)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)completionHandler;
-(void)activate;
-(ENExposureConfiguration *)configuration;
-(void)setProgress:(NSProgress *)arg1 ;
-(ENManager *)manager;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)invalidate;
-(BOOL)_runFinishStart;
-(void)setConfiguration:(ENExposureConfiguration *)arg1 ;
-(BOOL)_runActivateStart;
-(BOOL)_runAddFile;
-(void)_runDetectionDone;
-(NSArray *)diagnosisKeyURLs;
-(void)setDiagnosisKeyURLs:(NSArray *)arg1 ;
@end

