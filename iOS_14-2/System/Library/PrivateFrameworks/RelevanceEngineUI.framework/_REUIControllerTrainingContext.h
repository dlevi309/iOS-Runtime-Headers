/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/REUITrainingContext.h>

@protocol _REUIControllerTrainingContextDelegate;
@interface _REUIControllerTrainingContext : REUITrainingContext {

	double _maximumNegativeDwellTime;
	double _minimumPositiveDwellTime;
	unsigned long long _onScreenElementCount;
	id<_REUIControllerTrainingContextDelegate> _delegate;

}

@property (assign,nonatomic) double maximumNegativeDwellTime;                                         //@synthesize maximumNegativeDwellTime=_maximumNegativeDwellTime - In the implementation block
@property (assign,nonatomic) double minimumPositiveDwellTime;                                         //@synthesize minimumPositiveDwellTime=_minimumPositiveDwellTime - In the implementation block
@property (assign,nonatomic) unsigned long long onScreenElementCount;                                 //@synthesize onScreenElementCount=_onScreenElementCount - In the implementation block
@property (assign,nonatomic,__weak) id<_REUIControllerTrainingContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_REUIControllerTrainingContextDelegate>)delegate;
-(void)setDelegate:(id<_REUIControllerTrainingContextDelegate>)arg1 ;
-(void)setMinimumPositiveDwellTime:(double)arg1 ;
-(void)setMaximumNegativeDwellTime:(double)arg1 ;
-(void)setOnScreenElementCount:(unsigned long long)arg1 ;
-(id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2 ;
-(BOOL)elementIsAvailable:(id)arg1 ;
-(id)interactionTypeForElement:(id)arg1 ;
-(double)maximumNegativeDwellTime;
-(double)minimumPositiveDwellTime;
-(unsigned long long)onScreenElementCount;
@end

