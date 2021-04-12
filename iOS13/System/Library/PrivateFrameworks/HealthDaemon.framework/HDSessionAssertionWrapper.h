/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDAssertion;

@interface HDSessionAssertionWrapper : NSObject {

	HDAssertion* _currentAssertion;
	/*^block*/id _createAndTakeBlock;

}

@property (nonatomic,copy,readonly) id createAndTakeBlock;              //@synthesize createAndTakeBlock=_createAndTakeBlock - In the implementation block
@property (nonatomic,readonly) BOOL taken; 
-(void)dealloc;
-(void)_releaseAssertion;
-(BOOL)taken;
-(id)initWithCreateAndTakeBlock:(/*^block*/id)arg1 ;
-(void)_takeAssertion;
-(id)createAndTakeBlock;
@end

