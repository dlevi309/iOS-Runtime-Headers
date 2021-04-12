/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, _HMDAccountIdentifier, NSUUID;

@interface HMDAccountIdentifier : HMFObject <HMFObject, NSCopying, NSSecureCoding> {

	_HMDAccountIdentifier* _internal;

}

@property (copy,readonly) _HMDAccountIdentifier * internal;                       //@synthesize internal=_internal - In the implementation block
@property (getter=isAuthenticated,readonly) BOOL authenticated; 
@property (copy,readonly) NSString * senderCorrelationIdentifier; 
@property (copy,readonly) NSUUID * identifier; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)accountIdentifierForAccountHandle:(id)arg1 ;
+(id)accountIdentifierForAppleAccountContext:(id)arg1 ;
+(id)accountIdentifierForMessageContext:(id)arg1 ;
-(BOOL)isAuthenticated;
-(id)initWithInternal:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(_HMDAccountIdentifier *)internal;
-(NSString *)shortDescription;
-(NSString *)senderCorrelationIdentifier;
-(NSArray *)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

