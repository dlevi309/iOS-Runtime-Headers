/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, SAAceClientState;

@interface SAGetSingleClientStateFailed : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,retain) SAAceClientState * attemptedClientState; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getSingleClientStateFailed;
+(id)getSingleClientStateFailedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getSingleClientStateFailedWithErrorCode:(long long)arg1 ;
+(id)getSingleClientStateFailedWithReason:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)initWithReason:(id)arg1 ;
-(id)initWithErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(SAAceClientState *)attemptedClientState;
-(void)setAttemptedClientState:(SAAceClientState *)arg1 ;
-(NSString *)reason;
-(void)setErrorCode:(long long)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

