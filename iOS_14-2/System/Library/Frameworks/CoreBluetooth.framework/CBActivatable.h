/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@protocol CBActivatable
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (nonatomic,copy) id invalidationHandler; 
@required
-(void)activateWithCompletion:(/*^block*/id)arg1;
-(void)setDispatchQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)invalidate;
-(void)setInvalidationHandler:(/*^block*/id)arg1;
-(id)invalidationHandler;

@end

