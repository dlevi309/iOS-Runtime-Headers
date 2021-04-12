/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/ATXScoredPredictionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _PASLock, ATXMinimalSlotResolutionParameters, NSString;

@interface ATXActionPredictionContainer : NSObject <ATXScoredPredictionProtocol, NSCopying> {

	_PASLock* _lock;
	ATXPredictionItem _predictionItem;
	ATXMinimalSlotResolutionParameters* _parameters;
	NSString* _actionKey;

}

@property (assign,nonatomic) ATXPredictionItem predictionItem; 
@property (nonatomic,readonly) NSString * actionKey;                        //@synthesize actionKey=_actionKey - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(float)score;
-(void)setScore:(float)arg1 ;
-(NSString *)actionKey;
-(id)initWithScoredAction:(id)arg1 slotSet:(id)arg2 minimalSlotResolutionParameters:(id)arg3 score:(float)arg4 actionKey:(id)arg5 predictionItem:(ATXPredictionItem)arg6 ;
-(id)initWithScoredAction:(id)arg1 slotSet:(id)arg2 actionKey:(id)arg3 ;
-(id)initWithMinimalSlotResolutionParameters:(id)arg1 score:(float)arg2 actionKey:(id)arg3 ;
-(void)initializeScoredActionAndSlotSet;
-(id)scoredAction;
-(id)slotSet;
-(BOOL)isEqualToActionPredictionContainer:(id)arg1 ;
-(ATXPredictionItem)predictionItem;
-(void)setPredictionItem:(ATXPredictionItem)arg1 ;
@end

