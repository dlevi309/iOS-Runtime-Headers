/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber;

@interface SASSuspendClientEndpointer : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * audioProcessedMs; 
@property (nonatomic,copy) NSNumber * suspendDurationMs; 
+(id)suspendClientEndpointer;
+(id)suspendClientEndpointerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)audioProcessedMs;
-(void)setAudioProcessedMs:(NSNumber *)arg1 ;
-(NSNumber *)suspendDurationMs;
-(void)setSuspendDurationMs:(NSNumber *)arg1 ;
@end

