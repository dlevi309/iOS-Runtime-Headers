/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/SCRGovernor.h>

@class NSMutableSet, NSString;

@interface SCRCompositeGovernor : NSObject <SCRGovernor> {

	os_unfair_lock_s _lock;
	NSMutableSet* _governors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeGovernor:(id)arg1 ;
-(BOOL)taskAdministrator:(id)arg1 isEligibleToPerformTask:(id)arg2 eligiblityError:(id*)arg3 ;
-(void)addGovernor:(id)arg1 ;
-(void)taskAdministrator:(id)arg1 willPerformTask:(id)arg2 ;
-(void)taskAdministrator:(id)arg1 didCompleteTask:(id)arg2 withError:(id)arg3 ;
@end

