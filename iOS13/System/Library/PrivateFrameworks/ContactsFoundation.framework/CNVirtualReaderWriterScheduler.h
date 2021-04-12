/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNReaderWriterScheduler.h>

@class CNSuspendableSchedulerDecorator, NSString;

@interface CNVirtualReaderWriterScheduler : NSObject <CNReaderWriterScheduler> {

	CNSuspendableSchedulerDecorator* _scheduler;

}

@property (nonatomic,readonly) CNSuspendableSchedulerDecorator * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)resume;
-(void)suspend;
-(CNSuspendableSchedulerDecorator *)scheduler;
-(id)initWithScheduler:(id)arg1 ;
-(id)performReaderBlock:(/*^block*/id)arg1 ;
-(id)performWriterBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousReaderBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousWriterBlock:(/*^block*/id)arg1 ;
@end

