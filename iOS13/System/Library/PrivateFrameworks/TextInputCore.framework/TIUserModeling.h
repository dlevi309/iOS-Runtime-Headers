/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

@class NSArray;


@protocol TIUserModeling <TITypingSessionAggregatedEventObserver>
@property (nonatomic,readonly) NSArray * keys; 
@required
-(NSArray *)keys;
-(id)valuesForKey:(id)arg1;
-(void)addToDurableCounter:(int)arg1 forKey:(id)arg2;
-(void)addToTransientCounter:(int)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;
-(void)addNumberToTransientCounter:(id)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;

@end

