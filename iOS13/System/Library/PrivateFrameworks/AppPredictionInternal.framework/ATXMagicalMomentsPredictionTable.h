/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface ATXMagicalMomentsPredictionTable : NSObject <NSSecureCoding> {

	NSMutableArray* _predictionTableEntries;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPredictionTableEntries:(id)arg1 ;
-(id)describeTable;
-(void)addPredictions:(id)arg1 withApplicablePredicates:(id)arg2 ;
-(void)addPrediction:(id)arg1 withApplicablePredicates:(id)arg2 ;
-(id)predictionTableEntries;
-(id)validPredictionsFromTableEntries:(id)arg1 event:(id)arg2 ;
-(id)deduplicatePredictions:(id)arg1 ;
-(id)removeRestrictedPredictions:(id)arg1 ;
-(id)predictionsForTriggerEvent:(id)arg1 ;
@end

