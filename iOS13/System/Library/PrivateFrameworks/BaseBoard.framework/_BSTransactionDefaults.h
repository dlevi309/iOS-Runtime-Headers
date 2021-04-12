/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface _BSTransactionDefaults : BSAbstractDefaultDomain

@property (assign,getter=isAuditHistoryEnabled,nonatomic) BOOL auditHistoryEnabled; 
+(id)sharedInstance;
-(void)setAuditHistoryEnabled:(BOOL)arg1 ;
-(BOOL)isAuditHistoryEnabled;
-(void)_bindAndRegisterDefaults;
@end

