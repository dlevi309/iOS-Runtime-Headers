/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDTimeNode.h>

@class NSMutableArray, PDAnimationTarget, NSString;

@interface PDSequentialTimeNode : PDTimeNode {

	BOOL mConcurrent;
	int mPreviousAction;
	int mNextAction;
	NSMutableArray* mPreviousConditions;
	NSMutableArray* mNextConditions;

}

@property (nonatomic,retain) PDAnimationTarget * target; 
@property (assign,nonatomic) int presetClass; 
@property (assign,nonatomic) int presetId; 
@property (assign,nonatomic) int triggerType; 
@property (assign,nonatomic) int iterateType; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double direction; 
@property (nonatomic,retain) NSString * groupId; 
@property (assign,nonatomic) BOOL concurrent; 
@property (assign,nonatomic) int previousAction; 
@property (assign,nonatomic) int nextAction; 
@property (nonatomic,retain) NSMutableArray * previousConditions; 
@property (nonatomic,retain) NSMutableArray * nextConditions; 
+(unsigned long long)buildPartsFromTarget:(id)arg1 ;
+(id)timeNodeUnion:(id)arg1 initWithClass:(Class)arg2 ;
+(id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1 target:(id)arg2 ;
+(id)newSequentialTimeNodeGroupForAnimationInfo;
+(id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1 ;
-(void)setTarget:(PDAnimationTarget *)arg1 ;
-(PDAnimationTarget *)target;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(double)direction;
-(void)setDirection:(double)arg1 ;
-(BOOL)concurrent;
-(NSString *)groupId;
-(void)setGroupId:(NSString *)arg1 ;
-(int)triggerType;
-(void)setTriggerType:(int)arg1 ;
-(int)previousAction;
-(int)nextAction;
-(void)setNextAction:(int)arg1 ;
-(void)setPresetId:(int)arg1 ;
-(int)presetClass;
-(int)presetId;
-(int)iterateType;
-(void)setIterateType:(int)arg1 ;
-(void)setConcurrent:(BOOL)arg1 ;
-(void)setPreviousAction:(int)arg1 ;
-(NSMutableArray *)previousConditions;
-(void)setPreviousConditions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)nextConditions;
-(void)setNextConditions:(NSMutableArray *)arg1 ;
-(id)level1ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1 ;
-(id)level2ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1 level1NodeIndex:(unsigned long long)arg2 ;
-(id)level3BehaviorAtNodeIndex:(unsigned long long)arg1 level2NodeIndex:(unsigned long long)arg2 level1NodeIndex:(unsigned long long)arg3 ;
-(void)setLevel2ParallelAttribute:(/*^block*/id)arg1 ;
-(void)setPresetClass:(int)arg1 ;
@end

