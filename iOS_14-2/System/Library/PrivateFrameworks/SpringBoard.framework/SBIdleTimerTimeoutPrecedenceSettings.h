/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
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

