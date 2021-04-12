/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_canBeInterrupted;
-(void)_begin;
-(void)_didComplete;
-(void)_evaluateCompletion;
-(NSSet *)appInfos;
-(void)_startAppRepairs;
-(void)_completeRequest:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithApplicationInfos:(id)arg1 ;
@end

