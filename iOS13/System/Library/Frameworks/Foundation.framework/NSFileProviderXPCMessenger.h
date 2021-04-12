/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSFileProviderXPCInterface.h>

@protocol NSFileProvider, OS_dispatch_queue;
@class NSObject, NSFileProviderProxy, NSString;

@interface NSFileProviderXPCMessenger : NSObject <NSFileProviderXPCInterface> {

	id<NSFileProvider> _fileProvider;
	NSObject*<OS_dispatch_queue> _queue;
	NSFileProviderProxy* _fileProviderProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)checkInProviderWithReply:(/*^block*/id)arg1 ;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithFileProvider:(id)arg1 queue:(id)arg2 ;
-(void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 options:(unsigned long long)arg3 forAccessClaimWithID:(id)arg4 processIdentifier:(int)arg5 kernelOperation:(unsigned)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)provideItemAtURL:(id)arg1 forClaimWithID:(id)arg2 madeByClientWithProcessIdentifier:(int)arg3 options:(unsigned long long)arg4 kernelOperation:(unsigned)arg5 completionHandler:(/*^block*/id)arg6 ;
-(oneway void)cancelProvidingItemAtURL:(id)arg1 forClaimWithID:(id)arg2 ;
-(void)providePhysicalItemForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)observePresentationChangeOfKind:(id)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 observedUbiquityAttributes:(id)arg4 url:(id)arg5 newURL:(id)arg6 ;
-(oneway void)observeEndOfWriteAtURL:(id)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 ;
-(void)movingItemAtURL:(id)arg1 requiresProvidingWithDestinationURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithFileProviderProxy:(id)arg1 ;
@end

