/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)commandCompleted;
+(id)commandCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)homeIdentifier;
-(void)setHomeIdentifier:(NSURL *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)actionResults;
-(void)setActionResults:(NSArray *)arg1 ;
-(NSString *)clientValidity;
-(void)setClientValidity:(NSString *)arg1 ;
-(NSString *)commandOutcome;
-(void)setCommandOutcome:(NSString *)arg1 ;
-(NSString *)serverValidity;
-(void)setServerValidity:(NSString *)arg1 ;
@end

