/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (copy,readonly) NSUUID * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(BOOL)supportsSecureCoding;
+(id)accountIdentifierForAccountHandle:(id)arg1 ;
+(id)accountIdentifierForAppleAccountContext:(id)arg1 ;
+(id)accountIdentifierForMessageContext:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(_HMDAccountIdentifier *)internal;
-(NSString *)shortDescription;
-(BOOL)isAuthenticated;
-(NSArray *)attributeDescriptions;
-(id)initWithInternal:(id)arg1 ;
@end

