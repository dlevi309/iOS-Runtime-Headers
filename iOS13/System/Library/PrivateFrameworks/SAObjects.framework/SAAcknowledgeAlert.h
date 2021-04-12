/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SADomainObject;

@interface SAAcknowledgeAlert : SABaseClientBoundCommand

@property (nonatomic,retain) SADomainObject * object; 
+(id)acknowledgeAlert;
+(id)acknowledgeAlertWithDictionary:(id)arg1 context:(id)arg2 ;
-(SADomainObject *)object;
-(void)setObject:(SADomainObject *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

