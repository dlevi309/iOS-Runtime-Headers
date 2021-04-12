/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASmsSms;

@interface SASmsPlayAudio : SABaseClientBoundCommand

@property (nonatomic,retain) SASmsSms * message; 
+(id)playAudio;
+(id)playAudioWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setMessage:(SASmsSms *)arg1 ;
-(SASmsSms *)message;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

