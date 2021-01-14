/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSSet, NSArray;

@interface HMPerson : NSObject <HMFObject, NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSString* _name;
	NSSet* _personLinks;

}

@property (copy) NSUUID * UUID;                                                   //@synthesize UUID=_UUID - In the implementation block
@property (copy) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (copy) NSSet * personLinks;                                             //@synthesize personLinks=_personLinks - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(NSUUID *)UUID;
-(NSString *)privateDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(NSSet *)personLinks;
-(void)setPersonLinks:(NSSet *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(NSArray *)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
@end

