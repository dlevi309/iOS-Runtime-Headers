/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNSchedulerProvider.h>

@protocol CNSchedulerProvider, CNScheduler;
@class CNSuspendableSchedulerDecorator, NSString;

@interface CNUISchedulerProvider : NSObject <CNSchedulerProvider> {

	id<CNSchedulerProvider> _schedulerProvider;
	CNSuspendableSchedulerDecorator* _suspendableBackgroundScheduler;
	id<CNScheduler> _afterCACommitScheduler;

}

@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                     //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) CNSuspendableSchedulerDecorator * suspendableBackgroundScheduler;              //@synthesize suspendableBackgroundScheduler=_suspendableBackgroundScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> afterCACommitScheduler;                                        //@synthesize afterCACommitScheduler=_afterCACommitScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler; 
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler; 
@property (nonatomic,readonly) id<CNScheduler> inlineScheduler; 
@property (nonatomic,readonly) id<CNScheduler> immediateScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeBackgroundScheduler;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)suspendBackgroundScheduler;
-(id)init;
-(id<CNScheduler>)mainThreadScheduler;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(void)resumeBackgroundScheduler;
-(id)newReaderWriterSchedulerWithName:(id)arg1 ;
-(id<CNScheduler>)afterCACommitScheduler;
-(id<CNScheduler>)backgroundScheduler;
-(id)newSynchronousSerialSchedulerWithName:(id)arg1 ;
-(id)newSerialSchedulerWithName:(id)arg1 ;
-(CNSuspendableSchedulerDecorator *)suspendableBackgroundScheduler;
-(id<CNScheduler>)inlineScheduler;
-(id<CNScheduler>)immediateScheduler;
-(id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1 ;
@end

