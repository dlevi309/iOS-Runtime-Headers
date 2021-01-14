/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMPerson, HMFaceCrop, NSString, NSArray;

@interface HMFaceClassification : NSObject <HMFObject, NSCopying, NSSecureCoding> {

	NSUUID* _personManagerUUID;
	HMPerson* _person;
	HMFaceCrop* _faceCrop;

}

@property (copy,readonly) NSUUID * personManagerUUID;                             //@synthesize personManagerUUID=_personManagerUUID - In the implementation block
@property (copy,readonly) HMPerson * person;                                      //@synthesize person=_person - In the implementation block
@property (copy,readonly) HMFaceCrop * faceCrop;                                  //@synthesize faceCrop=_faceCrop - In the implementation block
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
-(HMPerson *)person;
-(NSString *)privateDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(NSString *)description;
-(NSArray *)attributeDescriptions;
-(HMFaceCrop *)faceCrop;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)personManagerUUID;
-(id)initWithPersonManagerUUID:(id)arg1 person:(id)arg2 faceCrop:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

