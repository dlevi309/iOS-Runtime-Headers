/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBIdleTimerTimeoutPrecedenceSettings : NSObject <BSDescriptionProviding> {

	double _normalTimeout;
	double _highTimeout;
	double _criticalTimeout;

}

@property (nonatomic,readonly) double normalTimeout;                              //@synthesize normalTimeout=_normalTimeout - In the implementation block
@property (nonatomic,readonly) double highTimeout;                                //@synthesize highTimeout=_highTimeout - In the implementation block
@property (nonatomic,readonly) double criticalTimeout;                            //@synthesize criticalTimeout=_criticalTimeout - In the implementation block
@property (nonatomic,readonly) unsigned long long highestPrecedence; 
@property (nonatomic,readonly) double leastTimeout; 
@property (nonatomic,readonly) double greatestTimeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)highestPrecedence;
-(void)_setTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2 ;
-(void)_setTimeout:(double)arg1 ifGreatestForPrecedence:(unsigned long long)arg2 ;
-(void)_setTimeout:(double)arg1 ifLeastForPrecedence:(unsigned long long)arg2 ;
-(double)_intervalForPrecedence:(unsigned long long)arg1 ;
-(double)leastTimeout;
-(double)greatestTimeout;
-(double)normalTimeout;
-(double)highTimeout;
-(double)criticalTimeout;
@end

