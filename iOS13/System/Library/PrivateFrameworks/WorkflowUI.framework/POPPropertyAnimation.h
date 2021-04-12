/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/POPAnimation.h>

@class POPAnimatableProperty;

@interface POPPropertyAnimation : POPAnimation

@property (nonatomic,retain) POPAnimatableProperty * property; 
@property (nonatomic,copy) id fromValue; 
@property (nonatomic,copy) id toValue; 
@property (assign,nonatomic) double roundingFactor; 
@property (assign,nonatomic) unsigned long long clampMode; 
@property (assign,getter=isAdditive,nonatomic) BOOL additive; 
+(id)animationWithCustomPropertyNamed:(id)arg1 readBlock:(/*^block*/id)arg2 writeBlock:(/*^block*/id)arg3 ;
+(id)animationWithCustomPropertyReadBlock:(/*^block*/id)arg1 writeBlock:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAdditive;
-(id)fromValue;
-(void)setFromValue:(id)arg1 ;
-(id)toValue;
-(void)setToValue:(id)arg1 ;
-(void)setAdditive:(BOOL)arg1 ;
-(id)currentValue;
-(POPAnimatableProperty *)property;
-(void)setProperty:(POPAnimatableProperty *)arg1 ;
-(void)_initState;
-(double)roundingFactor;
-(void)setRoundingFactor:(double)arg1 ;
-(unsigned long long)clampMode;
-(void)setClampMode:(unsigned long long)arg1 ;
-(id)progressMarkers;
-(void)setProgressMarkers:(id)arg1 ;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
@end

