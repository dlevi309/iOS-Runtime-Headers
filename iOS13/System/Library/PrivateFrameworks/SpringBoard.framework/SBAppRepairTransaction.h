/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransaction.h>

@class NSSet, NSMutableSet, STTelephonyStatusDomain;

@interface SBAppRepairTransaction : SBTransaction {

	NSSet* _appInfos;
	NSMutableSet* _repairRequests;
	STTelephonyStatusDomain* _telephonyDomain;

}

@property (nonatomic,copy,readonly) NSSet * appInfos;              //@synthesize appInfos=_appInfos - In the implementation block
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(void)_didComplete;
-(void)_evaluateCompletion;
-(void)_startAppRepairs;
-(void)_completeRequest:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithApplicationInfos:(id)arg1 ;
-(NSSet *)appInfos;
@end

