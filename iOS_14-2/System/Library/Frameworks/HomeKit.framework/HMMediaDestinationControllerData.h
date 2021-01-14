/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray, NSString;

@interface HMMediaDestinationControllerData : NSObject <HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSUUID* _parentIdentifier;
	NSUUID* _destinationIdentifier;
	NSArray* _availableDestinationIdentifiers;

}

@property (copy) NSUUID * destinationIdentifier;                                  //@synthesize destinationIdentifier=_destinationIdentifier - In the implementation block
@property (copy) NSArray * availableDestinationIdentifiers;                       //@synthesize availableDestinationIdentifiers=_availableDestinationIdentifiers - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSUUID * parentIdentifier;                              //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(NSString *)privateDescription;
-(id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 destinationIdentifier:(id)arg3 availableDestinationIdentifiers:(id)arg4 ;
-(NSUUID *)parentIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(id)logIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSArray *)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)destinationIdentifier;
-(NSUUID *)identifier;
-(NSArray *)availableDestinationIdentifiers;
-(void)setDestinationIdentifier:(NSUUID *)arg1 ;
-(void)setAvailableDestinationIdentifiers:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

