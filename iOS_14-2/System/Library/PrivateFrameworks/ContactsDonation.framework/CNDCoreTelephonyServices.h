/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <ContactsDonation/ContactsDonation-Structs.h>
#import <libobjc.A.dylib/CNDCoreTelephonyServices.h>

@protocol CNDCoreTelephonyServices <NSObject>
@required
-(CTServerConnectionRef)_CTServerConnectionCreateOnTargetQueue:(const CFAllocatorRef)arg1 :(const CFStringRef)arg2 :(id)arg3 :(/*^block*/id)arg4;
-(void)_CTServerConnectionRegisterBlockForNotification:(CTServerConnectionRef)arg1 :(const CFStringRef)arg2 :(/*^block*/id)arg3;
-(void)_CTServerConnectionUnregisterForNotification:(CTServerConnectionRef)arg1 :(const CFStringRef)arg2;

@end


@class NSString;

@interface CNDCoreTelephonyServices : NSObject <CNDCoreTelephonyServices>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CTServerConnectionRef)_CTServerConnectionCreateOnTargetQueue:(CFAllocatorRef)arg1 :(CFStringRef)arg2 :(id)arg3 :(/*^block*/id)arg4 ;
-(void)_CTServerConnectionRegisterBlockForNotification:(CTServerConnectionRef)arg1 :(CFStringRef)arg2 :(/*^block*/id)arg3 ;
-(void)_CTServerConnectionUnregisterForNotification:(CTServerConnectionRef)arg1 :(CFStringRef)arg2 ;
@end

