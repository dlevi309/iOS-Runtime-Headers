/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAGetClientState : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * statesToGet; 
+(id)getClientState;
+(id)getClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)statesToGet;
-(void)setStatesToGet:(NSArray *)arg1 ;
-(BOOL)mutatingCommand;
@end

