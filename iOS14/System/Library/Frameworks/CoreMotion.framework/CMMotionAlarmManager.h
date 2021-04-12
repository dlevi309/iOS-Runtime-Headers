/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<CMMotionAlarmDelegateProtocol>)delegate;
-(BOOL)unregisterAlarmWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)acknowledgeAlarmWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)launchRemoteAppWithError:(id*)arg1 ;
-(BOOL)unregisterAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)registerAlarmWithName:(id)arg1 type:(unsigned)arg2 duration:(unsigned)arg3 repeats:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)acknowledgeAlarm:(id)arg1 error:(id*)arg2 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setDelegate:(id<CMMotionAlarmDelegateProtocol>)arg1 ;
-(void)dealloc;
@end

