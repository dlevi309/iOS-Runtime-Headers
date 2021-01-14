/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class VNRecognizedPointsSpecifier, NSNumber, NSArray;

@interface VNRecognizedPointsObservation : VNObservation {

	VNRecognizedPointsSpecifier* _specifier;

}

@property (readonly) NSNumber * groupIdentifier; 
@property (copy,readonly) NSArray * availableKeys; 
@property (copy,readonly) NSArray * availableGroupKeys; 
+(BOOL)supportsSecureCoding;
-(NSArray *)availableGroupKeys;
-(NSArray *)availableKeys;
-(NSNumber *)groupIdentifier;
-(id)initWithRequestRevision:(unsigned long long)arg1 keypointReturningObservation:(id)arg2 ;
-(id)recognizedPointsForGroupKey:(id)arg1 error:(id*)arg2 ;
-(id)recognizedPointForKey:(id)arg1 error:(id*)arg2 ;
-(id)keypointsMultiArrayAndReturnError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

