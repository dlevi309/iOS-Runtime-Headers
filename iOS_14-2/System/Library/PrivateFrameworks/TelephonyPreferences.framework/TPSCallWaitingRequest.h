/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TPSCallClassRequest.h>
#import <libobjc.A.dylib/TPSSecureObject.h>

@class NSString;

@interface TPSCallWaitingRequest : TPSCallClassRequest <TPSSecureObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)unarchivedObjectClasses;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2 ;
@end

