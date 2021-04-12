/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(NSString *)launchId;
-(void)setLaunchId:(NSString *)arg1 ;
-(BOOL)backgroundLaunch;
-(void)setBackgroundLaunch:(BOOL)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

