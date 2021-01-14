/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
*/

@class NSArray, NSUUID, NSXPCConnection;


@protocol _NSExtensionContextInternalImplementation <NSObject>
@property (copy,readonly) NSArray * inputItems; 
@property (copy,readonly) NSUUID * _UUID; 
@property (readonly) NSXPCConnection * _auxiliaryConnection; 
@property (setter=_setRequestCleanUpBlock:,copy) id _requestCleanUpBlock; 
@property (readonly) id _principalObject; 
@property (readonly) SCD_Struct_EX1 _extensionHostAuditToken; 
@required
-(NSUUID *)_UUID;
-(id)_requestCleanUpBlock;
-(void)cancelRequestWithError:(id)arg1;
-(NSXPCConnection *)_auxiliaryConnection;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSArray *)inputItems;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 extensionContext:(id)arg4;
-(SCD_Struct_EX1)_extensionHostAuditToken;
-(id)_principalObject;
-(void)completeRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_setRequestCleanUpBlock:(/*^block*/id)arg1;

@end

