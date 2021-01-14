/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@protocol OS_dispatch_queue;
@class ENManager, NSObject, ENExposureConfiguration;

@interface ENExposureDetectionSession : NSObject <CUXPCCodable> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _finishCalled;
	unsigned long long _keysOutstanding;
	ENManager* _manager;
	unsigned long long _totalKeyCount;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	ENExposureConfiguration* _configuration;
	unsigned long long _maximumKeyCount;

}

@property (assign,nonatomic) unsigned long long maximumKeyCount;                      //@synthesize maximumKeyCount=_maximumKeyCount - In the implementation block
@property (nonatomic,retain) ENExposureConfiguration * configuration;                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
+(long long)authorizationStatus;
-(void)encodeWithXPCObject:(id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)maximumKeyCount;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)description;
-(ENExposureConfiguration *)configuration;
-(void)_invalidated;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)dealloc;
-(void)setConfiguration:(ENExposureConfiguration *)arg1 ;
-(void)_activateWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)scoreWithExposureInfo:(id)arg1 skip:(BOOL*)arg2 ;
-(void)activateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addDiagnosisKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishedDiagnosisKeysWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getExposureInfoWithMaximumCount:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)estimateRiskWithExposureInfo:(id)arg1 referenceTime:(double)arg2 transmissionRiskLevel:(char*)arg3 skip:(BOOL*)arg4 ;
-(void)updateDaySummary:(id)arg1 exposureInfo:(id)arg2 score:(double)arg3 ;
-(void)setMaximumKeyCount:(unsigned long long)arg1 ;
@end

