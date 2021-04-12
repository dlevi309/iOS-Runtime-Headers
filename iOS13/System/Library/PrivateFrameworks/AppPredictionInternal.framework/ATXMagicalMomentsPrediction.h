/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATXMagicalMomentsPrediction : NSObject <NSCopying, NSSecureCoding> {

	NSString* _predictionIdentifier;
	double _confidence;

}

@property (nonatomic,readonly) NSString * predictionIdentifier;              //@synthesize predictionIdentifier=_predictionIdentifier - In the implementation block
@property (nonatomic,readonly) double confidence;                            //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)convertPredictionsToPMMPredictionItems:(id)arg1 reason:(unsigned)arg2 anchor:(long long)arg3 triggerEvent:(id)arg4 ;
+(id)pmmMetadataForDuetEvent:(id)arg1 ;
+(long long)mmReasonToPMMReason:(unsigned)arg1 ;
+(long long)mmAnchorToPMMAnchor:(long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)confidence;
-(id)initWithConfidence:(double)arg1 predictionIdentifier:(id)arg2 ;
-(NSString *)predictionIdentifier;
@end

