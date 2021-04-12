/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNEspressoModelImageprint.h>

@interface VNFaceprint : VNEspressoModelImageprint
+(BOOL)supportsSecureCoding;
+(id)currentVersion;
+(unsigned)currentCodingVersion;
+(id)codingTypesToCodingKeys;
+(unsigned long long)currentSerializationVersion;
+(unsigned long long)serializationMagicNumber;
+(unsigned long long)confidenceTypeForRevision:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithState:(id)arg1 error:(id*)arg2 ;
@end

