/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAEHandleUnderstandingOutput : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * policyActionList; 
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)policyActionList;
-(void)setPolicyActionList:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

