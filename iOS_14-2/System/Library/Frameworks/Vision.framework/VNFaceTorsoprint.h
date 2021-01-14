/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNEspressoModelImageprint.h>

@class VNFaceprint, VNTorsoprint;

@interface VNFaceTorsoprint : VNEspressoModelImageprint {

	VNFaceprint* _faceprint;
	VNTorsoprint* _torsoprint;

}

@property (nonatomic,readonly) VNFaceprint * faceprint;                                    //@synthesize faceprint=_faceprint - In the implementation block
@property (nonatomic,readonly) VNTorsoprint * torsoprint;                                  //@synthesize torsoprint=_torsoprint - In the implementation block
@property (getter=isValidTorsoprint,nonatomic,readonly) BOOL validTorsoprint; 
+(BOOL)supportsSecureCoding;
+(id)currentVersion;
+(unsigned)currentCodingVersion;
+(id)codingTypesToCodingKeys;
+(unsigned long long)currentSerializationVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(id)serializeStateAndReturnError:(id*)arg1 ;
-(id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id*)arg3 ;
-(VNTorsoprint *)torsoprint;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 requestRevision:(unsigned long long)arg6 ;
-(id)initWithFaceprint:(id)arg1 torsoPrint:(id)arg2 requestRevision:(unsigned long long)arg3 ;
-(id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 validTorsoprint:(BOOL)arg6 requestRevision:(unsigned long long)arg7 ;
-(BOOL)isValidTorsoprint;
-(id)initWithState:(id)arg1 byteOffset:(unsigned long long*)arg2 error:(id*)arg3 ;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)serializedLength;
-(VNFaceprint *)faceprint;
@end

