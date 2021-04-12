/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <libobjc.A.dylib/NRTermsAcknowledgementRegistry.h>

@protocol NRTermsAcknowledgementRegistry <NSObject>
@required
-(void)add:(id)arg1 forDeviceID:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)checkForAcknowledgement:(id)arg1 forDeviceID:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end


@protocol NRTermsAcknowledgementRegistry;
@class NSString;

@interface NRTermsAcknowledgementRegistry : NSObject <NRTermsAcknowledgementRegistry> {

	id<NRTermsAcknowledgementRegistry> _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorWithEnum:(unsigned long long)arg1 ;
+(id)errorStringWithEnum:(unsigned long long)arg1 ;
-(void)add:(id)arg1 forDeviceID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)checkForAcknowledgement:(id)arg1 forDeviceID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

