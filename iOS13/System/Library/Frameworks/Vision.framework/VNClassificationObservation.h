/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@protocol VNOperationPointsProviding;
@class NSString;

@interface VNClassificationObservation : VNObservation {

	NSString* _identifier;
	id<VNOperationPointsProviding> _operationPointsProvider;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)operationPointsAndReturnError:(id*)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3 operationPointsProvider:(id)arg4 ;
-(BOOL)hasPrecisionRecallCurve;
-(BOOL)hasMinimumRecall:(float)arg1 forPrecision:(float)arg2 ;
-(BOOL)hasMinimumPrecision:(float)arg1 forRecall:(float)arg2 ;
@end

