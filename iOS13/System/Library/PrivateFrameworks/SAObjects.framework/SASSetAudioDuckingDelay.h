/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SASSetAudioDuckingDelay : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * duckingEventSyncDelay; 
@property (nonatomic,copy) NSNumber * preTriggerToDuckingEndDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setAudioDuckingDelay;
+(id)setAudioDuckingDelayWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)duckingEventSyncDelay;
-(void)setDuckingEventSyncDelay:(NSNumber *)arg1 ;
-(NSNumber *)preTriggerToDuckingEndDuration;
-(void)setPreTriggerToDuckingEndDuration:(NSNumber *)arg1 ;
@end

