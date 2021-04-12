/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@protocol IMBatteryStatusTestDelegate;
@interface IMBatteryStatus : NSObject {

	id<IMBatteryStatusTestDelegate> _testDelegate;

}

@property (assign,nonatomic,__weak) id<IMBatteryStatusTestDelegate> testDelegate;              //@synthesize testDelegate=_testDelegate - In the implementation block
@property (getter=isCharging,readonly) BOOL charging; 
-(id<IMBatteryStatusTestDelegate>)testDelegate;
-(void)setTestDelegate:(id<IMBatteryStatusTestDelegate>)arg1 ;
-(BOOL)isCharging;
@end

