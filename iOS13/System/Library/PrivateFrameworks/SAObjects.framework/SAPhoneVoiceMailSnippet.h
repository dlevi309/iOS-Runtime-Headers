/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSNumber, NSArray;

@interface SAPhoneVoiceMailSnippet : SAUISnippet

@property (nonatomic,copy) NSNumber * autoPlay; 
@property (nonatomic,copy) NSArray * calls; 
@property (nonatomic,copy) NSArray * playVoiceMailCommands; 
@property (nonatomic,retain) id<SAClientBoundCommand> postPlayCommand; 
+(id)voiceMailSnippet;
+(id)voiceMailSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)calls;
-(void)setCalls:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)autoPlay;
-(void)setAutoPlay:(NSNumber *)arg1 ;
-(NSArray *)playVoiceMailCommands;
-(void)setPlayVoiceMailCommands:(NSArray *)arg1 ;
-(id<SAClientBoundCommand>)postPlayCommand;
-(void)setPostPlayCommand:(id<SAClientBoundCommand>)arg1 ;
@end

