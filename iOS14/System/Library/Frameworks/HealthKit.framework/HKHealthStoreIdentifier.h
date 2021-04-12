/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, HKProfileIdentifier;

@interface HKHealthStoreIdentifier : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;

}

@property (copy,readonly) NSUUID * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) HKProfileIdentifier * profileIdentifier; 
@property (getter=isPrimaryStoreIdentifier,readonly) BOOL primaryStoreIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)identifierFromProfileIdentifier:(id)arg1 ;
+(id)primaryStoreIdentifier;
-(HKProfileIdentifier *)profileIdentifier;
-(BOOL)isPrimaryStoreIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initPrimaryStoreIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

