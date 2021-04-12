/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNSchedulerProvider <NSObject>
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler; 
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler; 
@property (nonatomic,readonly) id<CNScheduler> inlineScheduler; 
@property (nonatomic,readonly) id<CNScheduler> immediateScheduler; 
@required
-(id<CNScheduler>)mainThreadScheduler;
-(id)newReaderWriterSchedulerWithName:(id)arg1;
-(id<CNScheduler>)backgroundScheduler;
-(id)newSynchronousSerialSchedulerWithName:(id)arg1;
-(id)newSerialSchedulerWithName:(id)arg1;
-(id<CNScheduler>)inlineScheduler;
-(id<CNScheduler>)immediateScheduler;
-(id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;

@end

