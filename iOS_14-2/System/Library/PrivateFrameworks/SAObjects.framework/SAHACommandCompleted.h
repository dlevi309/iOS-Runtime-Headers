/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString, NSURL;

@interface SAHACommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * actionResults; 
@property (nonatomic,copy) NSString * clientValidity; 
@property (nonatomic,copy) NSString * commandOutcome; 
@property (nonatomic,copy) NSURL * homeIdentifier; 
@property (nonatomic,copy) NSString * serverValidity; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandCompleted;
+(id)commandCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)actionResults;
-(NSString *)clientValidity;
-(void)setClientValidity:(NSString *)arg1 ;
-(NSString *)commandOutcome;
-(NSString *)serverValidity;
-(void)setServerValidity:(NSString *)arg1 ;
-(NSURL *)homeIdentifier;
-(void)setHomeIdentifier:(NSURL *)arg1 ;
-(void)setCommandOutcome:(NSString *)arg1 ;
-(void)setActionResults:(NSArray *)arg1 ;
@end

