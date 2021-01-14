/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)operationPointsAndReturnError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3 operationPointsProvider:(id)arg4 ;
-(BOOL)hasPrecisionRecallCurve;
-(BOOL)hasMinimumRecall:(float)arg1 forPrecision:(float)arg2 ;
-(BOOL)hasMinimumPrecision:(float)arg1 forRecall:(float)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

