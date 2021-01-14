/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNReaderWriterScheduler.h>

@protocol CNReaderWriterScheduler <NSObject>
@required
-(void)suspend;
-(id)performReaderBlock:(/*^block*/id)arg1;
-(id)performWriterBlock:(/*^block*/id)arg1;
-(void)performSynchronousReaderBlock:(/*^block*/id)arg1;
-(void)performSynchronousWriterBlock:(/*^block*/id)arg1;
-(void)resume;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface CNReaderWriterScheduler : NSObject <CNReaderWriterScheduler> {

	BOOL _suspended;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _activeReaders;
	NSMutableArray* _pendingReaders;
	NSMutableArray* _activeWriters;
	NSMutableArray* _pendingWriters;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended; 
@property (nonatomic,readonly) NSMutableArray * activeReaders;                  //@synthesize activeReaders=_activeReaders - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingReaders;                 //@synthesize pendingReaders=_pendingReaders - In the implementation block
@property (nonatomic,readonly) NSMutableArray * activeWriters;                  //@synthesize activeWriters=_activeWriters - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingWriters;                 //@synthesize pendingWriters=_pendingWriters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(void)suspend;
-(BOOL)isSuspended;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(NSString *)description;
-(void)appendDescriptionToBuilder:(id)arg1 ;
-(void)addReaderWithIdentifier:(id)arg1 ;
-(void)activateReader:(id)arg1 ;
-(void)removeReader:(id)arg1 ;
-(NSMutableArray *)activeWriters;
-(NSMutableArray *)pendingWriters;
-(NSMutableArray *)activeReaders;
-(NSMutableArray *)pendingReaders;
-(id)performReaderBlock:(/*^block*/id)arg1 ;
-(id)performWriterBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousReaderBlock:(/*^block*/id)arg1 ;
-(void)activateWriter:(id)arg1 ;
-(void)performSynchronousWriterBlock:(/*^block*/id)arg1 ;
-(void)addWriterWithIdentifier:(id)arg1 ;
-(void)removeWriter:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)resume;
@end

