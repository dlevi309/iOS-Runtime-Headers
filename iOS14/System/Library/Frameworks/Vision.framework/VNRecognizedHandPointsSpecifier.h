/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNRecognizedPointsSpecifier.h>

@class NSArray;

@interface VNRecognizedHandPointsSpecifier : VNRecognizedPointsSpecifier {

	NSArray* _orderedHandKeypoints;

}
+(BOOL)supportsSecureCoding;
-(id)availableGroupKeys;
-(id)pointKeyGroupLabelsMapping;
-(id)populatedMLMultiArrayAndReturnError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithVCPHandObservation:(id)arg1 requestRevision:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

