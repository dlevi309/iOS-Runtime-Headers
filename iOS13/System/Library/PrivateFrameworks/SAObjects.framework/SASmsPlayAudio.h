/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASmsSms;

@interface SASmsPlayAudio : SABaseClientBoundCommand

@property (nonatomic,retain) SASmsSms * message; 
+(id)playAudio;
+(id)playAudioWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASmsSms *)message;
-(void)setMessage:(SASmsSms *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

