/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, HMIFaceCrop, HMIFaceprint, NSUUID;

@interface HMIFaceClassification : HMFObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _name;
	NSString* _personsModelIdentifier;
	HMIFaceCrop* _faceCrop;
	HMIFaceprint* _faceprint;
	NSUUID* _personUUID;
	NSUUID* _sourceUUID;
	NSUUID* _sessionEntityUUID;
	long long _familiarity;
	double _confidence;
	CGRect _faceBoundingBox;

}

@property (readonly) double confidence;                              //@synthesize confidence=_confidence - In the implementation block
@property (readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (readonly) NSString * personsModelIdentifier;              //@synthesize personsModelIdentifier=_personsModelIdentifier - In the implementation block
@property (readonly) CGRect faceBoundingBox;                         //@synthesize faceBoundingBox=_faceBoundingBox - In the implementation block
@property (readonly) HMIFaceCrop * faceCrop;                         //@synthesize faceCrop=_faceCrop - In the implementation block
@property (readonly) HMIFaceprint * faceprint;                       //@synthesize faceprint=_faceprint - In the implementation block
@property (readonly) NSUUID * UUID; 
@property (readonly) NSUUID * personUUID;                            //@synthesize personUUID=_personUUID - In the implementation block
@property (readonly) NSUUID * sourceUUID;                            //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (readonly) NSUUID * sessionEntityUUID;                     //@synthesize sessionEntityUUID=_sessionEntityUUID - In the implementation block
@property (readonly) long long familiarity;                          //@synthesize familiarity=_familiarity - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)attributeDescriptions;
-(HMIFaceCrop *)faceCrop;
-(NSUUID *)personUUID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)sourceUUID;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(CGRect)faceBoundingBox;
-(HMIFaceprint *)faceprint;
-(NSUUID *)sessionEntityUUID;
-(long long)familiarity;
-(id)initWithUUID:(id)arg1 sourceUUID:(id)arg2 sessionEntityUUID:(id)arg3 faceCrop:(id)arg4 faceprint:(id)arg5 confidence:(double)arg6 familiarity:(long long)arg7 ;
-(id)initWithPersonUUID:(id)arg1 sourceUUID:(id)arg2 sessionEntityUUID:(id)arg3 confidence:(double)arg4 familiarity:(long long)arg5 ;
-(id)initWithUUID:(id)arg1 sourceUUID:(id)arg2 faceBoundingBox:(CGRect)arg3 ;
-(id)initWithUUID:(id)arg1 sourceUUID:(id)arg2 sessionEntityUUID:(id)arg3 faceBoundingBox:(CGRect)arg4 facecrop:(id)arg5 faceprint:(id)arg6 confidence:(double)arg7 ;
-(id)initWithUUID:(id)arg1 name:(id)arg2 personsModelIdentifier:(id)arg3 faceBoundingBox:(CGRect)arg4 ;
-(NSString *)personsModelIdentifier;
@end

