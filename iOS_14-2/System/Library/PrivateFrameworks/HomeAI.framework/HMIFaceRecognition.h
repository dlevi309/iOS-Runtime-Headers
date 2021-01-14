/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMIFaceCrop, HMIFaceprint, NSSet, NSString;

@interface HMIFaceRecognition : HMFObject <HMFLogging, NSSecureCoding> {

	HMIFaceCrop* _faceCrop;
	HMIFaceprint* _faceprint;
	NSSet* _classifications;
	double _faceQualityScore;
	NSSet* _predictedLinkedEntityUUIDs;
	long long _sessionEntityAssignment;

}

@property (readonly) NSSet * predictedLinkedEntityUUIDs;              //@synthesize predictedLinkedEntityUUIDs=_predictedLinkedEntityUUIDs - In the implementation block
@property (readonly) long long sessionEntityAssignment;               //@synthesize sessionEntityAssignment=_sessionEntityAssignment - In the implementation block
@property (readonly) HMIFaceCrop * faceCrop;                          //@synthesize faceCrop=_faceCrop - In the implementation block
@property (readonly) HMIFaceprint * faceprint;                        //@synthesize faceprint=_faceprint - In the implementation block
@property (readonly) NSSet * classifications;                         //@synthesize classifications=_classifications - In the implementation block
@property (readonly) double faceQualityScore;                         //@synthesize faceQualityScore=_faceQualityScore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)attributeDescriptions;
-(HMIFaceCrop *)faceCrop;
-(NSSet *)classifications;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HMIFaceprint *)faceprint;
-(id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3 predictedLinkedEntityUUIDs:(id)arg4 faceQualityScore:(double)arg5 sessionEntityAssignment:(long long)arg6 ;
-(NSSet *)predictedLinkedEntityUUIDs;
-(double)faceQualityScore;
-(long long)sessionEntityAssignment;
-(id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3 ;
-(id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3 predictedLinkedEntityUUIDs:(id)arg4 ;
@end

