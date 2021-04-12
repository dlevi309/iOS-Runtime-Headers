/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class ATXSlotResolution;

@interface ATXActionResolution : NSObject {

	ATXSlotResolution* _slotResolver;

}
-(id)init;
-(id)statisticsForActionKey:(id)arg1 ;
-(id)initWithSlotResolver:(id)arg1 ;
-(id)actionPredictionsForActionKey:(id)arg1 statistics:(id)arg2 appActionPredictionItem:(const ATXPredictionItem*)arg3 appActionLogProbability:(double)arg4 scoreLogger:(id)arg5 andLimit:(int)arg6 forMagicalMoments:(BOOL)arg7 ;
-(id)actionPredictionsForActionKey:(id)arg1 statistics:(id)arg2 appActionPredictionItem:(const ATXPredictionItem*)arg3 appActionLogProbability:(double)arg4 scoreLogger:(id)arg5 andLimit:(int)arg6 forMagicalMoments:(BOOL)arg7 predictionItemsToKeep:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >Ref)arg8 ;
@end

