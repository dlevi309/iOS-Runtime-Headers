/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNRecognizedPointsSpecifier.h>

@class NSArray;

@interface VNRecognizedBodyPointsSpecifier : VNRecognizedPointsSpecifier {

	NSArray* _orderedPersonKeypoints;

}
+(BOOL)supportsSecureCoding;
-(id)initWithVCPPersonObservation:(id)arg1 requestRevision:(unsigned long long)arg2 ;
-(id)availableGroupKeys;
-(id)pointKeyGroupLabelsMapping;
-(id)populatedMLMultiArrayAndReturnError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

