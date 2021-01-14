/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAutomaticCallCountdownEnabled;
-(long long)lockButtonSOSTriggerCount;
-(BOOL)clawCanTriggerSOS;
-(void)_bindAndRegisterDefaults;
@end

