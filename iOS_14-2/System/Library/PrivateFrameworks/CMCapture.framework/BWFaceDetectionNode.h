/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFanOutNode.h>

@class BWNodeOutput, NSArray, NSSet, NSDictionary;

@interface BWFaceDetectionNode : BWFanOutNode {

	BWNodeOutput* _metadataObjectOutput;
	NSArray* _boxedMetadataOutputs;
	CGRect _rectOfInterest;
	os_unfair_lock_s _rectOfInterestLock;
	BOOL _metadataObjectOutputEnabled;
	BOOL _boxedMetadataOutputEnabled;
	NSSet* _enabledDetectedObjectTypes;
	int _lastObjectFaceCount;
	int _lastDetectedObjectsCount;
	unsigned _localIDsForFaces_BE[5];
	unsigned _localIDsForDetectedHumanBodies_BE[3];
	unsigned _localIDsForDetectedCatBodies_BE[3];
	unsigned _localIDsForDetectedDogBodies_BE[3];
	unsigned _localIDsForDetectedSalientObjects_BE[3];
	NSDictionary* _detectionTimingInfoByBoxedOutput;
	unsigned _localIDOfDetectedFace_BE;
	unsigned _localIDOfDetectedFaceFaceID_BE;
	unsigned _localIDOfDetectedFaceBounds_BE;
	unsigned _localIDOfDetectedFaceRoll_BE;
	unsigned _localIDOfDetectedFaceYaw_BE;
	OpaqueCMBlockBufferRef _emptyMetadataSampleData;
	SCD_Struct_BW8 _startMarkerBufferPTS;
	SCD_Struct_BW8 _prevBoxedFacePTS;
	SCD_Struct_BW8 _prevBoxedFaceDur;
	SCD_Struct_BW8 _prevBoxedNoFacePTS;
	int _lastBoxedFaceCount;
	unsigned _recordCollectionAtomIdentifier_BE;
	unsigned _collectionItemsAtomIdentifier_BE;

}

@property (readonly) BWNodeOutput * metadataObjectOutput;              //@synthesize metadataObjectOutput=_metadataObjectOutput - In the implementation block
@property (readonly) NSArray * boxedMetadataOutputs;                   //@synthesize boxedMetadataOutputs=_boxedMetadataOutputs - In the implementation block
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(int)_populateLocalIDsForFacesWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)metadataObjectOutputEnabled;
-(void)setMetadataObjectOutputEnabled:(BOOL)arg1 ;
-(void)_renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forBoxedMetadataOutput:(id)arg2 withDetectedObjectsInfo:(id)arg3 ;
-(BOOL)_addDetectedObjectsInfo:(id)arg1 toSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(BOOL)boxedMetadataOutputEnabled;
-(void)_renderSampleBufferForBoxedMetadataOutput:(opaqueCMSampleBufferRef)arg1 withFaceArray:(id)arg2 ;
-(BOOL)_addFacesArray:(id)arg1 toSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(int)_populateLocalIDsForCatBodiesWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(unsigned long long)append:(id)arg1 toBoxedData:(char*)arg2 localIDs:(unsigned*)arg3 isFace:(BOOL)arg4 ;
-(int)_populateLocalIDsForSalientObjectsWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(NSArray *)boxedMetadataOutputs;
-(id)initWithObjectMetadataIdentifiers:(id)arg1 movieFileOutputMetadataIdentifierGroups:(id)arg2 ;
-(void)_renderSampleBufferForBoxedMetadataOutput:(opaqueCMSampleBufferRef)arg1 withDetectedObjectsInfo:(id)arg2 ;
-(void)setBoxedMetadataOutputEnabled:(BOOL)arg1 ;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(CGRect)rectOfInterest;
-(unsigned*)localIDsForKey:(id)arg1 ;
-(int)_populateLocalIDsForHumanBodiesWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(BWNodeOutput *)metadataObjectOutput;
-(int)_populateLocalIDsForDogBodiesWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)dealloc;
-(OpaqueCMBlockBufferRef)_getEmptyMetadataSampleData;
@end

