/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SACFAbstractClientCommandCompleted.h>

@class NSString, SACFProvideContext;

@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted

@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,retain) SACFProvideContext * updateContext; 
+(id)flowCompleted;
+(id)flowCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)domain;
-(id)groupIdentifier;
-(void)setDomain:(NSString *)arg1 ;
-(void)setUpdateContext:(SACFProvideContext *)arg1 ;
-(SACFProvideContext *)updateContext;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

