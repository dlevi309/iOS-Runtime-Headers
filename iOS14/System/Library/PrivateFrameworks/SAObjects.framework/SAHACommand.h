/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)command;
-(void)setActions:(NSArray *)arg1 ;
-(void)setFilter:(SAHAFilter *)arg1 ;
-(SAHAFilter *)filter;
-(id)groupIdentifier;
-(NSArray *)actions;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)serverValidity;
-(void)setServerValidity:(NSString *)arg1 ;
-(NSArray *)actionRequests;
-(BOOL)mutatingCommand;
-(void)setMutatingCommand:(BOOL)arg1 ;
-(void)setActionRequests:(NSArray *)arg1 ;
-(NSNumber *)commandTimeout;
-(void)setCommandTimeout:(NSNumber *)arg1 ;
@end

