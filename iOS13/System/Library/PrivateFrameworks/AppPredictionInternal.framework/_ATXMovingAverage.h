/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _ATXMovingAverage : NSObject <NSSecureCoding> {

	double _movingAverage;
	double _movingError;
	long long _count;
	double _alpha;

}

@property (nonatomic,readonly) double movingAverage; 
@property (nonatomic,readonly) double movingError; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addElement:(double)arg1 ;
-(id)initWithAlpha:(double)arg1 ;
-(double)movingAverage;
-(double)movingError;
@end

