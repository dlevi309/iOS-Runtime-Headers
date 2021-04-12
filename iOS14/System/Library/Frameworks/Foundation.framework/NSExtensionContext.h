/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_NSExtensionAuxHostingBase.h>

@class NSUUID, NSArray, NSXPCConnection, NSXPCListener, NSString;

@interface NSExtensionContext : NSObject <NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase> {

	BOOL __dummyExtension;
	id _internalImplementation;

}

@property (nonatomic,copy) NSUUID * _UUID; 
@property (setter=_setRequestCleanUpBlock:,nonatomic,copy) id _requestCleanUpBlock; 
@property (setter=_setInputItems:,nonatomic,copy) NSArray * inputItems; 
@property (setter=_setExtensionHostProxy:,retain) id<_NSExtensionContextHosting> _extensionHostProxy; 
@property (setter=_setExtensionVendorProxy:,nonatomic,retain) id<_NSExtensionContextVending> _extensionVendorProxy; 
@property (setter=_setAuxiliaryConnection:,nonatomic,retain) NSXPCConnection * _auxiliaryConnection; 
@property (setter=_setAuxiliaryListener:,nonatomic,retain) NSXPCListener * _auxiliaryListener; 
@property (setter=_setProcessAssertion:,retain) id _processAssertion; 
@property (assign,setter=_setPrincipalObject:,nonatomic) id _principalObject; 
@property (assign,setter=_setDummyExtension:,getter=_isDummyExtension,nonatomic) BOOL _dummyExtension;                           //@synthesize _dummyExtension=__dummyExtension - In the implementation block
@property (setter=_setTransaction:,getter=_transaction,retain) NSObject*<OS_os_transaction> _transaction; 
@property (setter=_setExtensionHostAuditToken:) SCD_Struct_NS0 _extensionHostAuditToken; 
@property (retain,readonly) id internalImplementation;                                                                           //@synthesize internalImplementation=_internalImplementation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_extensionContextHostProtocolWithAllowedErrorClasses:(id)arg1 ;
+(id)_allowedErrorClasses;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionContextHostProtocolAllowedClassesForItems;
+(id)_defaultExtensionContextVendorProtocol;
+(id)_extensionContextVendorProtocolWithAllowedErrorClasses:(id)arg1 ;
+(id)_extensionContextForIdentifier:(id)arg1 ;
+(id)_defaultExtensionContextProtocol;
-(NSUUID *)_UUID;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setPrincipalObject:(id)arg1 ;
-(void)completeRequestReturningItems:(id)arg1 expirationHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<_NSExtensionContextVending>)_extensionVendorProxy;
-(void)_setExtensionHostProxy:(id)arg1 ;
-(NSObject*<OS_os_transaction>)_transaction;
-(id)init;
-(id)_processAssertion;
-(id)_requestCleanUpBlock;
-(void)___nsx_pingHost:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setAuxiliaryListener:(id)arg1 ;
-(void)_setAuxiliaryConnection:(id)arg1 ;
-(id)initWithInputItems:(id)arg1 contextUUID:(id)arg2 ;
-(void)completeRequestReturningItems:(id)arg1 ;
-(BOOL)_isHost;
-(void)setInputItems:(NSArray *)arg1 ;
-(void)_setExtensionHostAuditToken:(SCD_Struct_NS0)arg1 ;
-(NSString *)description;
-(void)cancelRequestWithError:(id)arg1 ;
-(NSXPCConnection *)_auxiliaryConnection;
-(void)_setProcessAssertion:(id)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(id)internalImplementation;
-(id)initWithInputItems:(id)arg1 ;
-(void)didConnectToVendor:(id)arg1 ;
-(NSArray *)inputItems;
-(void)_setDummyExtension:(BOOL)arg1 ;
-(BOOL)_isDummyExtension;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(id<_NSExtensionContextHosting>)_extensionHostProxy;
-(SCD_Struct_NS0)_extensionHostAuditToken;
-(void)_setExtensionVendorProxy:(id)arg1 ;
-(id)_principalObject;
-(void)_setTransaction:(id)arg1 ;
-(void)_loadPreviewImageForPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)completeRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_loadItemForPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)set_UUID:(NSUUID *)arg1 ;
-(void)_willPerformHostCallback:(/*^block*/id)arg1 ;
-(void)_setRequestCleanUpBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSXPCListener *)_auxiliaryListener;
@end

