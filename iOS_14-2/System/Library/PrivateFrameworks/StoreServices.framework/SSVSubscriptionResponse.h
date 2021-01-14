/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface SSVSubscriptionResponse : NSObject <SSXPCCoding, NSCopying> {

	NSMutableDictionary* _accountUniqueIdentifierToSubscriptionStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setSubscriptionStatus:(id)arg1 forAccountUniqueIdentifier:(unsigned long long)arg2 ;
-(id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

