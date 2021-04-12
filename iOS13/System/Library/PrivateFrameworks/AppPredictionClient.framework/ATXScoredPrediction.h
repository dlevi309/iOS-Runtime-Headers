/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)score;
-(void)setScore:(float)arg1 ;
-(id)initWithPredictedItem:(id)arg1 score:(float)arg2 ;
-(id)initWithBundleId:(id)arg1 score:(float)arg2 ;
-(BOOL)isEqualToScoredPredictionItem:(id)arg1 ;
-(id)predictedItem;
@end

