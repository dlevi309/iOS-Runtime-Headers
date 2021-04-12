/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ATXScoredPrediction : NSObject <NSCopying, NSSecureCoding> {

	float _score;
	id _predictedItem;

}

@property (nonatomic,readonly) id predictedItem;              //@synthesize predictedItem=_predictedItem - In the implementation block
@property (nonatomic,readonly) float score;                   //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predictionsFrom:(id)arg1 ;
-(id)initWithPredictedItem:(id)arg1 score:(float)arg2 ;
-(id)init;
-(float)score;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setScore:(float)arg1 ;
-(BOOL)isEqualToScoredPredictionItem:(id)arg1 ;
-(id)initWithBundleId:(id)arg1 score:(float)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predictedItem;
-(BOOL)isEqual:(id)arg1 ;
@end

