/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDAssertion;

@interface HDSessionAssertionWrapper : NSObject {

	HDAssertion* _currentAssertion;
	/*^block*/id _createAndTakeBlock;

}

@property (nonatomic,copy,readonly) id createAndTakeBlock;              //@synthesize createAndTakeBlock=_createAndTakeBlock - In the implementation block
@property (nonatomic,readonly) BOOL taken; 
-(BOOL)taken;
-(void)_releaseAssertion;
-(void)dealloc;
-(id)initWithCreateAndTakeBlock:(/*^block*/id)arg1 ;
-(void)_takeAssertion;
-(id)createAndTakeBlock;
@end

