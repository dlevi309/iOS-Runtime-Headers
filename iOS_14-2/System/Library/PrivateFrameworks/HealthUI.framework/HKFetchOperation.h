/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKFetchOperationDelegate;
@class NSUUID, NSString;

@interface HKFetchOperation : NSObject {

	BOOL _highPriority;
	NSUUID* _UUID;
	NSString* _operationDescription;
	id<HKFetchOperationDelegate> _delegate;
	double _queueTime;
	double _executionTime;

}

@property (assign,setter=_setDelegate:,getter=_delegate,nonatomic,__weak) id<HKFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double queueTime;                                                                                //@synthesize queueTime=_queueTime - In the implementation block
@property (assign,nonatomic) double executionTime;                                                                            //@synthesize executionTime=_executionTime - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                                                                                 //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSString * operationDescription;                                                               //@synthesize operationDescription=_operationDescription - In the implementation block
@property (assign,nonatomic) BOOL highPriority;                                                                               //@synthesize highPriority=_highPriority - In the implementation block
-(id)_delegate;
-(NSUUID *)UUID;
-(void)setExecutionTime:(double)arg1 ;
-(double)executionTime;
-(NSString *)operationDescription;
-(BOOL)highPriority;
-(void)_setDelegate:(id)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(id)initWithOperationDescription:(id)arg1 ;
-(void)startOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)stopOperation;
-(void)setQueueTime:(double)arg1 ;
-(double)queueTime;
-(void)_alertDelegateDidUpdatePriority;
@end

