/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <Foundation/NSFileCoordinator.h>

@protocol OS_dispatch_source;
@class BRCAccountSession, NSURL, NSObject;

@interface BRCFileCoordinator : NSFileCoordinator {

	BRCAccountSession* _session;
	unsigned long long _startStamp;
	NSURL* _url1;
	NSURL* _url2;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _doneHandler;
	BOOL _cancelled;
	BOOL _isUpdateForReconnecting;
	BOOL _forRead;

}

@property (assign,nonatomic) BOOL isUpdateForReconnecting;              //@synthesize isUpdateForReconnecting=_isUpdateForReconnecting - In the implementation block
@property (nonatomic,readonly) BOOL forRead;                            //@synthesize forRead=_forRead - In the implementation block
+(void)itemDidChangeAtPath:(id)arg1 logicalFilename:(id)arg2 ;
+(void)itemDidAppearAtPath:(id)arg1 logicalFilename:(id)arg2 ;
+(void)itemDidDisappearAtPath:(id)arg1 logicalFilename:(id)arg2 ;
+(void)itemAtPath:(id)arg1 origLogicalName:(id)arg2 didBounceToNewLogicalName:(id)arg3 ;
+(void)itemAtPath:(id)arg1 logicalFilename:(id)arg2 didMoveToPath:(id)arg3 logicalFilename:(id)arg4 hasContentUpdate:(BOOL)arg5 ;
-(void)cancelAfterDelay:(double)arg1 ;
-(void)scheduleRenameOfItemAtURL:(id)arg1 toItemAtURL:(id)arg2 contentUpdate:(BOOL)arg3 queue:(id)arg4 taskTracker:(id)arg5 accessor:(/*^block*/id)arg6 ;
-(BOOL)isUpdateForReconnecting;
-(void)_willRequestCoordinationWithContext:(id)arg1 url1:(id)arg2 url2:(id)arg3 ;
-(void)scheduleReadOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(/*^block*/id)arg4 ;
-(void)scheduleUpdateOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(/*^block*/id)arg4 ;
-(BOOL)forRead;
-(id)initWithSession:(id)arg1 forRead:(BOOL)arg2 doneHandler:(/*^block*/id)arg3 ;
-(void)setIsUpdateForReconnecting:(BOOL)arg1 ;
-(void)_didObtainCoordination:(id)arg1 context:(id)arg2 url1:(id)arg3 url2:(id)arg4 handler:(/*^block*/id)arg5 fcHandler:(/*^block*/id)arg6 error:(id)arg7 ;
-(void)scheduleDeleteOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(/*^block*/id)arg4 ;
-(void)cancel;
@end

