/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler; 
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler; 
@property (nonatomic,readonly) id<CNScheduler> inlineScheduler; 
@property (nonatomic,readonly) id<CNScheduler> immediateScheduler; 
+(id)makeBackgroundScheduler;
-(id)init;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id<CNScheduler>)mainThreadScheduler;
-(id)newSerialSchedulerWithName:(id)arg1 ;
-(id)newSynchronousSerialSchedulerWithName:(id)arg1 ;
-(id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1 ;
-(id<CNScheduler>)immediateScheduler;
-(id<CNScheduler>)backgroundScheduler;
-(id<CNScheduler>)inlineScheduler;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id)newReaderWriterSchedulerWithName:(id)arg1 ;
-(void)suspendBackgroundScheduler;
-(void)resumeBackgroundScheduler;
-(CNSuspendableSchedulerDecorator *)suspendableBackgroundScheduler;
-(id<CNScheduler>)afterCACommitScheduler;
@end

