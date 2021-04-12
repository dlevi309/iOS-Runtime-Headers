/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class VNClassificationObservation, NSArray;

@interface VNFaceAttributeCategory : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding> {

	VNClassificationObservation* _mostLikelyLabel;
	NSArray* _allLabelsWithConfidences;
	unsigned long long _requestRevision;

}

@property (nonatomic,copy) VNClassificationObservation * label;                 //@synthesize mostLikelyLabel=_mostLikelyLabel - In the implementation block
@property (nonatomic,copy) NSArray * allLabelsWithConfidences;                  //@synthesize allLabelsWithConfidences=_allLabelsWithConfidences - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision;              //@synthesize requestRevision=_requestRevision - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)allLabelsWithConfidences;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(VNClassificationObservation *)arg1 ;
-(unsigned long long)requestRevision;
-(void)_computeLabel;
-(void)setAllLabelsWithConfidences:(NSArray *)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VNClassificationObservation *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

