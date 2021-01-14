/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

@class NSArray;


@protocol TIUserModeling <NSObject>
@property (nonatomic,readonly) NSArray * contexts; 
@required
-(void)addToDurableCounter:(int)arg1 forKey:(id)arg2;
-(void)addDoubleToTransientCounter:(double)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;
-(void)addIntegerToTransientCounter:(int)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;
-(id)valuesFromContext:(id)arg1;
-(NSArray *)contexts;

@end

