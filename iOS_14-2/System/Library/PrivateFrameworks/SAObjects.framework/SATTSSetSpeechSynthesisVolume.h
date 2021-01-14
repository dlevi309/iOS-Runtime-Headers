/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SATTSSetSpeechSynthesisVolume : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSNumber * volumeValue; 
+(id)setSpeechSynthesisVolume;
+(id)setSpeechSynthesisVolumeWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setVolumeValue:(NSNumber *)arg1 ;
-(NSNumber *)volumeValue;
-(BOOL)mutatingCommand;
@end

