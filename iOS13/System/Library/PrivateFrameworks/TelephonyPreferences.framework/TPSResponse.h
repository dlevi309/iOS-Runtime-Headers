/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)archivedDataWithError:(id*)arg1 ;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)initWithSubscriptionContext:(id)arg1 error:(id)arg2 ;
@end

