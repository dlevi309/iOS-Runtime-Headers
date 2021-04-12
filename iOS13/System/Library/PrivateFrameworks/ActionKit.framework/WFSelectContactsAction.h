/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@class NSArray;

@interface WFSelectContactsAction : WFAction

@property (nonatomic,readonly) NSArray * contactPropertyIDs; 
@property (nonatomic,readonly) BOOL selectMultiple; 
-(NSArray *)contactPropertyIDs;
-(void)outputContacts:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)selectMultiple;
@end

