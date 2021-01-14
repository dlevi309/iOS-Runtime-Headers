/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _CDPSimpleModelParameterManagerTuningValue : NSObject <NSSecureCoding> {

	float _lambda;
	float _w0;
	float _threshold;
	float _score;

}

@property (nonatomic,readonly) float lambda;                 //@synthesize lambda=_lambda - In the implementation block
@property (nonatomic,readonly) float w0;                     //@synthesize w0=_w0 - In the implementation block
@property (nonatomic,readonly) float threshold;              //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,readonly) float score;                  //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)w0;
-(float)threshold;
-(float)lambda;
-(float)score;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithLambda:(float)arg1 w0:(float)arg2 threshold:(float)arg3 score:(float)arg4 ;
-(id)initWithCoder:(id)arg1 ;
@end

