/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBSOSDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) BOOL disablesForAccessibility; 
@property (assign,nonatomic) BOOL performedCheckForTripleClickSOSMigrationAlert; 
-(void)setPerformedCheckForTripleClickSOSMigrationAlert:(BOOL)arg1 ;
-(BOOL)performedCheckForTripleClickSOSMigrationAlert;
-(void)setDisablesForAccessibility:(BOOL)arg1 ;
-(BOOL)disablesForAccessibility;
-(void)_bindAndRegisterDefaults;
-(BOOL)isAutomaticCallCountdownEnabled;
-(long long)lockButtonSOSTriggerCount;
-(BOOL)clawCanTriggerSOS;
@end

