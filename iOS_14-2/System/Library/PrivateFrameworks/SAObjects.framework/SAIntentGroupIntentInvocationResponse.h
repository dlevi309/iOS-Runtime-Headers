/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SAIntentGroupIntentInvocationResponse : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL backgroundLaunch; 
@property (nonatomic,copy) NSString * launchId; 
@property (nonatomic,copy) NSArray * parameters; 
@property (nonatomic,copy) NSString * utterance; 
+(id)intentInvocationResponse;
+(id)intentInvocationResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(NSString *)utterance;
-(id)encodedClassName;
-(BOOL)backgroundLaunch;
-(BOOL)requiresResponse;
-(void)setUtterance:(NSString *)arg1 ;
-(NSString *)launchId;
-(void)setLaunchId:(NSString *)arg1 ;
-(void)setBackgroundLaunch:(BOOL)arg1 ;
@end

