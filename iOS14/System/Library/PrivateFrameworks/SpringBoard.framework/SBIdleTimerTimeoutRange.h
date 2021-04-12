/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBIdleTimerTimeoutRange : NSObject <BSDescriptionProviding> {

	double _lowerTimeout;
	double _upperTimeout;

}

@property (nonatomic,readonly) double lowerTimeout;                 //@synthesize lowerTimeout=_lowerTimeout - In the implementation block
@property (nonatomic,readonly) double upperTimeout;                 //@synthesize upperTimeout=_upperTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(BOOL)intersects:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(double)lowerTimeout;
-(double)upperTimeout;
-(id)initWithLowerTimeout:(double)arg1 upperTimeout:(double)arg2 ;
-(id)clippedRangeWithFavoredRange:(id)arg1 ;
@end

