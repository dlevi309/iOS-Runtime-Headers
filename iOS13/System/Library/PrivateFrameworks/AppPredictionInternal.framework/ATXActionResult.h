/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class ATXScoredPrediction, NSString;

@interface ATXActionResult : NSObject {

	ATXPredictionItem _predictionItem;
	BOOL _hasPredictionItem;
	ATXScoredPrediction* _scoredAction;
	NSString* _actionKey;

}

@property (nonatomic,readonly) ATXScoredPrediction * scoredAction;                   //@synthesize scoredAction=_scoredAction - In the implementation block
@property (nonatomic,readonly) NSString * actionKey;                                 //@synthesize actionKey=_actionKey - In the implementation block
@property (nonatomic,readonly) const ATXPredictionItem* predictionItem; 
-(NSString *)actionKey;
-(ATXScoredPrediction *)scoredAction;
-(const ATXPredictionItem*)predictionItem;
-(void)setPredictionItem:(const ATXPredictionItem*)arg1 ;
-(id)initWithScoredAction:(id)arg1 predictionItem:(const ATXPredictionItem*)arg2 actionKey:(id)arg3 ;
@end

