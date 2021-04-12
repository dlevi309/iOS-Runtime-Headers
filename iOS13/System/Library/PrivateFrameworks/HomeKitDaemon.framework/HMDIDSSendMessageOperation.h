/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class HMDRemoteMessageDestination, NSString, IDSService, HMFMessage, NSArray;

@interface HMDIDSSendMessageOperation : HMFOperation <HMFLogging, HMFObject, IDSServiceDelegate> {

	double _timeout;
	HMDRemoteMessageDestination* _destination;
	NSString* _messageIdentifier;
	IDSService* _service;
	HMFMessage* _message;

}

@property (readonly) IDSService * service;                                        //@synthesize service=_service - In the implementation block
@property (readonly) HMFMessage * message;                                        //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(double)timeout;
+(id)shortDescription;
+(id)logCategory;
-(NSString *)description;
-(void)main;
-(HMFMessage *)message;
-(IDSService *)service;
-(NSString *)shortDescription;
-(id)initWithMessage:(id)arg1 ;
-(NSString *)privateDescription;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(id)logIdentifier;
-(NSArray *)attributeDescriptions;
-(id)initWithMessage:(id)arg1 service:(id)arg2 ;
@end

