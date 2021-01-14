/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SiriUIFluidDismissalState.h>

@class NSString;

@interface SBFluidDismissalState : NSObject <SiriUIFluidDismissalState> {

	double _backgroundWeighting;
	double _contentWeighting;
	long long _dismissalType;
	long long _transitionPhase;
	CGRect _contentRect;
	CGRect _homeGrabberContentRect;

}

@property (assign,nonatomic) double backgroundWeighting; 
@property (assign,nonatomic) double contentWeighting; 
@property (assign,nonatomic) CGRect contentRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double backgroundWeighting;                 //@synthesize backgroundWeighting=_backgroundWeighting - In the implementation block
@property (assign,nonatomic) double contentWeighting;                    //@synthesize contentWeighting=_contentWeighting - In the implementation block
@property (assign,nonatomic) CGRect contentRect;                         //@synthesize contentRect=_contentRect - In the implementation block
@property (assign,nonatomic) CGRect homeGrabberContentRect;              //@synthesize homeGrabberContentRect=_homeGrabberContentRect - In the implementation block
@property (assign,nonatomic) long long dismissalType;                    //@synthesize dismissalType=_dismissalType - In the implementation block
@property (assign,nonatomic) long long transitionPhase;                  //@synthesize transitionPhase=_transitionPhase - In the implementation block
-(CGRect)contentRect;
-(void)setTransitionPhase:(long long)arg1 ;
-(void)setContentRect:(CGRect)arg1 ;
-(long long)transitionPhase;
-(void)setDismissalType:(long long)arg1 ;
-(double)contentWeighting;
-(double)backgroundWeighting;
-(long long)dismissalType;
-(void)setBackgroundWeighting:(double)arg1 ;
-(void)setContentWeighting:(double)arg1 ;
-(void)setHomeGrabberContentRect:(CGRect)arg1 ;
-(CGRect)homeGrabberContentRect;
@end

