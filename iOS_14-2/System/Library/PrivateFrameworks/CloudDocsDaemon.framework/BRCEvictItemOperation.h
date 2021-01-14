/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRItemNotificationReceiving.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCAccountSession, NSURL, brc_task_tracker, BRCNotificationPipe, NSString;

@interface BRCEvictItemOperation : _BRCFrameworkOperation <BRItemNotificationReceiving, BRCOperationSubclass> {

	BRCAccountSession* _session;
	unsigned long long _section;
	NSURL* _url;
	brc_task_tracker* _tracker;
	BRCNotificationPipe* _pipe;
	BOOL _isFinished;
	/*^block*/id _evictionCompletionBlock;

}

@property (copy) id evictionCompletionBlock;                        //@synthesize evictionCompletionBlock=_evictionCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)receiveProgressUpdates:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setEvictionCompletionBlock:(id)arg1 ;
-(void)main;
-(id)evictionCompletionBlock;
-(oneway void)invalidate;
-(void)cancel;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithSession:(id)arg1 url:(id)arg2 ;
@end

