/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, HMFaceClassification, NSString, NSArray;

@interface HMCameraSignificantEvent : NSObject <HMFObject, NSCopying, NSSecureCoding> {

	NSUUID* _uniqueIdentifier;
	unsigned long long _reason;
	NSDate* _dateOfOccurrence;
	unsigned long long _confidenceLevel;
	NSUUID* _cameraProfileUUID;
	HMFaceClassification* _faceClassification;

}

@property (copy,readonly) NSUUID * uniqueIdentifier;                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long reason;                                   //@synthesize reason=_reason - In the implementation block
@property (copy,readonly) NSDate * dateOfOccurrence;                              //@synthesize dateOfOccurrence=_dateOfOccurrence - In the implementation block
@property (readonly) unsigned long long confidenceLevel;                          //@synthesize confidenceLevel=_confidenceLevel - In the implementation block
@property (copy,readonly) NSUUID * cameraProfileUUID;                             //@synthesize cameraProfileUUID=_cameraProfileUUID - In the implementation block
@property (copy,readonly) HMFaceClassification * faceClassification;              //@synthesize faceClassification=_faceClassification - In the implementation block
@property (readonly) BOOL canAskForUserFeedback; 
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
-(NSString *)privateDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(NSUUID *)uniqueIdentifier;
-(NSString *)description;
-(NSArray *)attributeDescriptions;
-(unsigned long long)reason;
-(NSUUID *)cameraProfileUUID;
-(HMFaceClassification *)faceClassification;
-(id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 cameraProfileUUID:(id)arg5 faceClassification:(id)arg6 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 faceClassification:(id)arg5 ;
-(BOOL)canAskForUserFeedback;
-(NSDate *)dateOfOccurrence;
-(unsigned long long)confidenceLevel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

