/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/CXCallDirectoryProviderHostProtocol.h>

@protocol CXCallDirectoryProviderHostProtocol, OS_dispatch_queue;
@class NSObject, NSString;

@interface CXCallDirectoryExtensionHostContext : NSExtensionContext <CXCallDirectoryProviderHostProtocol> {

	id<CXCallDirectoryProviderHostProtocol> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXCallDirectoryProviderHostProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id<CXCallDirectoryProviderHostProtocol>)delegate;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)activate;
-(void)setDelegate:(id<CXCallDirectoryProviderHostProtocol>)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(oneway void)isIncrementalLoadingAllowed:(/*^block*/id)arg1 ;
-(oneway void)addBlockingEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)removeBlockingEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)removeAllBlockingEntriesWithReply:(/*^block*/id)arg1 ;
-(oneway void)addIdentificationEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)removeIdentificationEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)removeAllIdentificationEntriesWithReply:(/*^block*/id)arg1 ;
-(oneway void)completeRequestWithReply:(/*^block*/id)arg1 ;
-(void)requestFailedWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

