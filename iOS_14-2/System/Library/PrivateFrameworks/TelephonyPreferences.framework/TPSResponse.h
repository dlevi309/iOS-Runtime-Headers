/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <libobjc.A.dylib/TPSSecureObject.h>

@class NSError, CTXPCServiceSubscriptionContext, NSString;

@interface TPSResponse : NSObject <TPSSecureObject> {

	NSError* _error;
	CTXPCServiceSubscriptionContext* _subscriptionContext;

}

@property (nonatomic,retain) NSError * error;                                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;              //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(id)archivedDataWithError:(id*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 error:(id)arg2 ;
@end

