/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@protocol NSFilePresenterXPCInterfaceNSXPCProxyCreating;
@class NSObject, NSFileAccessProcessManager;

@interface NSFilePresenterManagedProxy : NSObject <NSXPCProxyCreating> {

	unsigned long long _filePresenterResponses;
	NSObject*<NSFilePresenterXPCInterface>*<NSXPCProxyCreating> _xpcProxy;
	NSObject*<NSFilePresenterXPCInterface>*<NSXPCProxyCreating> _nonboostingXPCProxy;
	NSFileAccessProcessManager* _processManager;
	/*^block*/id _errorHandler;

}

@property (assign) unsigned long long filePresenterResponses;                //@synthesize filePresenterResponses=_filePresenterResponses - In the implementation block
@property (retain) NSFileAccessProcessManager * processManager;              //@synthesize processManager=_processManager - In the implementation block
@property (copy) id errorHandler;                                            //@synthesize errorHandler=_errorHandler - In the implementation block
-(id)errorHandler;
-(void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_safelySendMessageWithSelector:(SEL)arg1 withErrorCompletionHandler:(/*^block*/id)arg2 sender:(/*^block*/id)arg3 ;
-(void)setErrorHandler:(id)arg1 ;
-(void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)remoteObjectProxy;
-(NSFileAccessProcessManager *)processManager;
-(void)saveChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)_presenterRespondsToSelector:(SEL)arg1 ;
-(void)setFilePresenterResponses:(unsigned long long)arg1 ;
-(id)initWithXPCProxy:(id)arg1 ;
-(unsigned long long)filePresenterResponses;
-(void)setProcessManager:(NSFileAccessProcessManager *)arg1 ;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

