/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMapTable;

@interface VNPersonsModelFaceModel : NSObject <NSSecureCoding> {

	NSMapTable* _serialNumberToPersonUniqueIdentifierMapTable;
	shared_ptr<vision::mod::FaceIDModel>* _faceIDModel;
	unsigned long long _faceprintRequestRevision;
	int _maximumElementsPerID;

}
+(BOOL)supportsSecureCoding;
+(shared_ptr<vision::mod::ImageDescriptorBufferFloat32>*)_concatenateFaceprintImageDescriptorBuffer:(shared_ptr<vision::mod::ImageDescriptorBufferFloat32>*)arg1 withFaceprints:(id)arg2 forIdentityWithSerialNumber:(int)arg3 faceprintLabels:(vector<int, std::__1::allocator<int> >*)arg4 ;
+(id)modelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)faceprintRequestRevision;
-(unsigned long long)personCount;
-(id)personUniqueIdentifiers;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFaceIDModel:(shared_ptr<vision::mod::FaceIDModel>*)arg1 faceprintRequestRevision:(unsigned long long)arg2 maximumElementsPerID:(unsigned long long)arg3 personUniqueIdentifierToSerialNumberMapping:(id)arg4 ;
-(BOOL)_getSerialNumber:(int*)arg1 forPersonUniqueIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_personPredictionsForFace:(id)arg1 withDescriptor:(const ImageDescriptorBufferFloat32*)arg2 limit:(unsigned long long)arg3 faceIDCanceller:(CVMLCanceller*)arg4 error:(id*)arg5 ;
-(id)personPredictionsForFace:(id)arg1 withDescriptor:(const ImageDescriptorBufferFloat32*)arg2 limit:(unsigned long long)arg3 canceller:(id)arg4 error:(id*)arg5 ;
-(id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)faceCountsForAllPersons;
-(unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1 ;
-(id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1 ;
@end

