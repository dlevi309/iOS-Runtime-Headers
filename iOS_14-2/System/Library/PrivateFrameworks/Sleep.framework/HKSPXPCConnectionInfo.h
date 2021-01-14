/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSXPCInterface;

@interface HKSPXPCConnectionInfo : NSObject <BSDescriptionProviding> {

	NSString* _machServiceName;
	NSXPCInterface* _remoteObjectInterface;
	id _exportedObject;
	NSXPCInterface* _exportedObjectInterface;
	NSString* _lifecycleNotification;
	NSString* _requiredEntitlement;
	unsigned long long _options;

}

@property (nonatomic,copy,readonly) NSString * machServiceName;                       //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,readonly) NSXPCInterface * remoteObjectInterface;                //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (nonatomic,readonly) id exportedObject;                                     //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,readonly) NSXPCInterface * exportedObjectInterface;              //@synthesize exportedObjectInterface=_exportedObjectInterface - In the implementation block
@property (nonatomic,copy,readonly) NSString * lifecycleNotification;                 //@synthesize lifecycleNotification=_lifecycleNotification - In the implementation block
@property (nonatomic,copy,readonly) NSString * requiredEntitlement;                   //@synthesize requiredEntitlement=_requiredEntitlement - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                            //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infoForMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7 ;
-(NSString *)requiredEntitlement;
-(id)succinctDescription;
-(id)exportedObject;
-(NSXPCInterface *)remoteObjectInterface;
-(NSString *)lifecycleNotification;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)options;
-(NSXPCInterface *)exportedObjectInterface;
-(NSString *)machServiceName;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7 ;
-(id)succinctDescriptionBuilder;
@end

