/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNEspressoModelImageprint.h>

@interface VNFaceprint : VNEspressoModelImageprint {

	float _confidence;

}

@property (nonatomic,readonly) float confidence;              //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)currentVersion;
+(unsigned)currentCodingVersion;
+(id)codingTypesToCodingKeys;
+(unsigned long long)currentSerializationVersion;
+(unsigned long long)serializationMagicNumber;
+(unsigned long long)confidenceTypeForRevision:(unsigned long long)arg1 ;
-(float)confidence;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 requestRevision:(unsigned long long)arg6 ;
-(id)initWithState:(id)arg1 byteOffset:(unsigned long long*)arg2 error:(id*)arg3 ;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)serializedLength;
-(id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 confidence:(float)arg6 requestRevision:(unsigned long long)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
@end

