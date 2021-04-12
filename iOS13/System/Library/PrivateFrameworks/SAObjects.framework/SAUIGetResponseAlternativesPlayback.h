/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUIGetResponseAlternatives;

@interface SAUIGetResponseAlternativesPlayback : SABaseClientBoundCommand

@property (nonatomic,retain) SAUIGetResponseAlternatives * playbackCommand; 
+(id)getResponseAlternativesPlayback;
+(id)getResponseAlternativesPlaybackWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAUIGetResponseAlternatives *)playbackCommand;
-(void)setPlaybackCommand:(SAUIGetResponseAlternatives *)arg1 ;
@end

