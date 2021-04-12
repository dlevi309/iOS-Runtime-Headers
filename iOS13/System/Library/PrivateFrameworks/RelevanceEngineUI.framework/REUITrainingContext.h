/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngine/RETrainingContext.h>

@class NSMutableDictionary, NSArray;

@interface REUITrainingContext : RETrainingContext {

	NSMutableDictionary* _becameVisibleDates;
	NSMutableDictionary* _visibilityDurations;
	BOOL _resetsWhenResignsCurrent;

}

@property (nonatomic,readonly) double maximumNegativeDwellTime; 
@property (nonatomic,readonly) double minimumPositiveDwellTime; 
@property (nonatomic,readonly) unsigned long long onScreenElementCount; 
@property (nonatomic,readonly) NSArray * visibleElementIdentifiers; 
@property (assign,nonatomic) BOOL resetsWhenResignsCurrent;                          //@synthesize resetsWhenResignsCurrent=_resetsWhenResignsCurrent - In the implementation block
-(id)init;
-(void)resetContext;
-(void)_willResignCurrent;
-(BOOL)performSimulationCommand:(id)arg1 withOptions:(id)arg2 ;
-(BOOL)resetsWhenResignsCurrent;
-(BOOL)isDisplayingElementWithIdentifier:(id)arg1 ;
-(void)elementWithIdentifierDidEndDisplay:(id)arg1 ;
-(id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2 ;
-(BOOL)elementIsAvailable:(id)arg1 ;
-(id)interactionTypeForElement:(id)arg1 ;
-(double)maximumNegativeDwellTime;
-(double)minimumPositiveDwellTime;
-(unsigned long long)onScreenElementCount;
-(void)selectElementWithIdentifier:(id)arg1 ;
-(void)elementWithIdentifierDidDisplay:(id)arg1 ;
-(id)_visibleElements;
-(id)_higherElementsThanElement:(id)arg1 ;
-(id)_lowerElementsThanElement:(id)arg1 ;
-(id)_interactionForElement:(id)arg1 ;
-(void)_trainDwellForElement:(id)arg1 withInterval:(double)arg2 ;
-(NSArray *)visibleElementIdentifiers;
-(void)setResetsWhenResignsCurrent:(BOOL)arg1 ;
@end

