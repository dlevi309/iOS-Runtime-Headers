/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSVFairPlaySubscriptionStatus : NSObject <SSXPCCoding> {

	BOOL _hasSubscriptionLease;
	BOOL _hasSubscriptionSlot;

}

@property (assign,nonatomic) BOOL hasSubscriptionLease;              //@synthesize hasSubscriptionLease=_hasSubscriptionLease - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionSlot;               //@synthesize hasSubscriptionSlot=_hasSubscriptionSlot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSubscriptionLease;
-(void)setHasSubscriptionLease:(BOOL)arg1 ;
-(BOOL)hasSubscriptionSlot;
-(void)setHasSubscriptionSlot:(BOOL)arg1 ;
@end

