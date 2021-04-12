/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNSchedulerProvider <NSObject>
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler; 
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler; 
@property (nonatomic,readonly) id<CNScheduler> inlineScheduler; 
@property (nonatomic,readonly) id<CNScheduler> immediateScheduler; 
@required
-(id<CNScheduler>)mainThreadScheduler;
-(id)newSerialSchedulerWithName:(id)arg1;
-(id)newSynchronousSerialSchedulerWithName:(id)arg1;
-(id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
-(id<CNScheduler>)immediateScheduler;
-(id<CNScheduler>)backgroundScheduler;
-(id<CNScheduler>)inlineScheduler;
-(id)newReaderWriterSchedulerWithName:(id)arg1;

@end

