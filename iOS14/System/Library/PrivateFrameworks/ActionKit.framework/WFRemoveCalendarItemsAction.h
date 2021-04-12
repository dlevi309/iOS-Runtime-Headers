/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFRemoveCalendarItemsAction : WFAction {

	unsigned long long _requiredConfirmations;
	unsigned long long _currentConfirmation;

}

@property (assign,nonatomic) unsigned long long requiredConfirmations;              //@synthesize requiredConfirmations=_requiredConfirmations - In the implementation block
@property (assign,nonatomic) unsigned long long currentConfirmation;                //@synthesize currentConfirmation=_currentConfirmation - In the implementation block
-(unsigned long long)entityType;
-(void)deleteItems:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)accessResource;
-(void)presentConfirmationToDeleteItems:(id)arg1 ;
-(unsigned long long)requiredConfirmations;
-(void)setRequiredConfirmations:(unsigned long long)arg1 ;
-(unsigned long long)currentConfirmation;
-(void)setCurrentConfirmation:(unsigned long long)arg1 ;
@end

