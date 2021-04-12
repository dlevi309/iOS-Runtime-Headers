/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(NSDate *)expirationDate;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)predictedItems;
-(id)initWithPredictedItems:(id)arg1 expirationDate:(id)arg2 ;
-(BOOL)isEqualToPrediction:(id)arg1 ;
@end

