/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/SCRGovernor.h>

@class NSDate, NSString;

@interface SCRTokenBucketBudget : NSObject <SCRGovernor> {

	os_unfair_lock_s _lock;
	double _capacity;
	double _singleTokenInterval;
	double _tokenCount;
	NSDate* _lastCountUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)taskAdministrator:(id)arg1 isEligibleToPerformTask:(id)arg2 eligiblityError:(id*)arg3 ;
-(void)taskAdministrator:(id)arg1 willPerformTask:(id)arg2 ;
-(void)_locked_updateTokenCountForTimeElapsed;
-(id)initWithBucketCapacity:(double)arg1 refreshInterval:(double)arg2 ;
-(void)_simulateTimePassing:(double)arg1 ;
@end

