/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNFaceObservationAccepting.h>

@class NSArray, NSString;

@interface VNCreateFaceTorsoprintRequest : VNImageBasedRequest <VNFaceObservationAccepting> {

	BOOL _forceFaceprintCreation;

}

@property (assign,nonatomic) BOOL forceFaceprintCreation;                //@synthesize forceFaceprintCreation=_forceFaceprintCreation - In the implementation block
@property (nonatomic,copy) NSArray * inputFaceObservations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(const SCD_Struct_VN20*)dependentRequestCompatability;
-(long long)dependencyProcessingOrdinality;
-(void)setForceFaceprintCreation:(BOOL)arg1 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)forceFaceprintCreation;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
@end

