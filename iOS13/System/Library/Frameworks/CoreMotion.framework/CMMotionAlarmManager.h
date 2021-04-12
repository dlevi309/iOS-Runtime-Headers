/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol CMMotionAlarmDelegateProtocol;
@class NSString;

@interface CMMotionAlarmManager : NSObject {

	id<CMMotionAlarmDelegateProtocol> _delegate;
	NSString* _name;

}

@property (assign,nonatomic) id<CMMotionAlarmDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(id<CMMotionAlarmDelegateProtocol>)delegate;
-(void)setDelegate:(id<CMMotionAlarmDelegateProtocol>)arg1 ;
-(id)initWithName:(id)arg1 ;
-(BOOL)unregisterAlarmWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)acknowledgeAlarmWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)registerAlarmWithName:(id)arg1 type:(unsigned)arg2 duration:(unsigned)arg3 repeats:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)launchRemoteAppWithError:(id*)arg1 ;
-(BOOL)unregisterAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)acknowledgeAlarm:(id)arg1 error:(id*)arg2 ;
@end

