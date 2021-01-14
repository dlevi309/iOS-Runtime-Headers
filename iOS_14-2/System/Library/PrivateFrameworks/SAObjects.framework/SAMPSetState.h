/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@interface SAMPSetState : SADomainCommand

@property (assign,nonatomic) int state; 
+(id)setStateWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)setState;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setState:(int)arg1 ;
-(int)state;
@end

