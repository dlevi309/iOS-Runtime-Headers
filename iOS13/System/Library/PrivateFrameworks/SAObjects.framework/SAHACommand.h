/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAConditionallyMutatingClientBoundCommand.h>

@class NSArray, NSNumber, SAHAFilter, NSString;

@interface SAHACommand : SADomainCommand <SAConditionallyMutatingClientBoundCommand>

@property (nonatomic,copy) NSArray * actionRequests; 
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,copy) NSNumber * commandTimeout; 
@property (nonatomic,retain) SAHAFilter * filter; 
@property (assign,nonatomic) BOOL mutatingCommand; 
@property (nonatomic,copy) NSString * serverValidity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)command;
+(id)commandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setFilter:(SAHAFilter *)arg1 ;
-(SAHAFilter *)filter;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setMutatingCommand:(BOOL)arg1 ;
-(NSString *)serverValidity;
-(void)setServerValidity:(NSString *)arg1 ;
-(NSArray *)actionRequests;
-(void)setActionRequests:(NSArray *)arg1 ;
-(NSNumber *)commandTimeout;
-(void)setCommandTimeout:(NSNumber *)arg1 ;
@end

