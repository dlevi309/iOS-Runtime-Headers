/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhoneNumberResolver.framework/PhoneNumberResolver
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PNRPhoneNumberResolver : NSObject {

	NSObject*<OS_dispatch_queue> _resolveQueue;

}
-(id)init;
-(void)resolvePhoneNumbers:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)resolvePhoneNumbers:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)_recordUsageAnalyticForCountryCode:(id)arg1 success:(BOOL)arg2 ;
-(id)_notAPhoneNumberError;
-(id)_notFullyQualifiedError;
-(id)resolveFullyQualifiedPhoneNumber:(id)arg1 inCountry:(id)arg2 ;
-(id)resolvePhoneNumber:(id)arg1 countryCode:(id)arg2 error:(id*)arg3 ;
@end

