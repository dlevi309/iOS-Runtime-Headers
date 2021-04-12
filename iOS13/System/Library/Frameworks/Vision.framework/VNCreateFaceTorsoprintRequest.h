/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNFaceObservationAccepting.h>

@class NSString, NSArray;

@interface VNCreateFaceTorsoprintRequest : VNImageBasedRequest <VNFaceObservationAccepting> {

	BOOL _forceFaceprintCreation;

}

@property (assign,nonatomic) BOOL forceFaceprintCreation;                //@synthesize forceFaceprintCreation=_forceFaceprintCreation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * inputFaceObservations; 
+(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN23*)dependentRequestCompatability;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(long long)dependencyProcessingOrdinality;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)setForceFaceprintCreation:(BOOL)arg1 ;
-(BOOL)forceFaceprintCreation;
@end

