/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKPendingOperationRecord : NSObject {

	/*^block*/id _operationHandler;
	/*^block*/id _completionHandler;
	long long _errorCount;

}

@property (nonatomic,copy,readonly) id operationHandler;               //@synthesize operationHandler=_operationHandler - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long errorCount;                     //@synthesize errorCount=_errorCount - In the implementation block
+(id)pendingOperation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)completionHandler;
-(id)operationHandler;
-(long long)errorCount;
-(void)setErrorCount:(long long)arg1 ;
@end

