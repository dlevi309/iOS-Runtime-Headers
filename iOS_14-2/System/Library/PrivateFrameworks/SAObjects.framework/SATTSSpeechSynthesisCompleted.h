/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SATTSSpeechSynthesisCompleted : SABaseClientBoundCommand

@property (assign,nonatomic) long long totalPacketNumber; 
+(id)speechSynthesisCompleted;
+(id)speechSynthesisCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(long long)totalPacketNumber;
-(void)setTotalPacketNumber:(long long)arg1 ;
@end

