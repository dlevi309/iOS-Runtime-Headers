/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@protocol IMBatteryStatusTestDelegate;
@interface IMBatteryStatus : NSObject {

	id<IMBatteryStatusTestDelegate> _testDelegate;

}

@property (assign,nonatomic,__weak) id<IMBatteryStatusTestDelegate> testDelegate;              //@synthesize testDelegate=_testDelegate - In the implementation block
@property (getter=isCharging,readonly) BOOL charging; 
-(id<IMBatteryStatusTestDelegate>)testDelegate;
-(BOOL)isCharging;
-(void)setTestDelegate:(id<IMBatteryStatusTestDelegate>)arg1 ;
@end

