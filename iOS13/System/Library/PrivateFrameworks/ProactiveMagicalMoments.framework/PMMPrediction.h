/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
*/


@class NSArray, NSDate;

@interface PMMPrediction : NSObject {

	NSArray* _predictedItems;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) NSArray * predictedItems;              //@synthesize predictedItems=_predictedItems - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)expirationDate;
-(id)initWithPredictedItems:(id)arg1 expirationDate:(id)arg2 ;
-(BOOL)isEqualToPrediction:(id)arg1 ;
-(NSArray *)predictedItems;
@end

