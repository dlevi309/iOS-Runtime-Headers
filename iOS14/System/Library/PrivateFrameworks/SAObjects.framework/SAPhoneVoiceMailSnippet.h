/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(void)setAutoPlay:(NSNumber *)arg1 ;
-(NSArray *)playVoiceMailCommands;
-(void)setPlayVoiceMailCommands:(NSArray *)arg1 ;
-(id<SAClientBoundCommand>)postPlayCommand;
-(void)setPostPlayCommand:(id<SAClientBoundCommand>)arg1 ;
-(void)setCalls:(NSArray *)arg1 ;
-(NSNumber *)autoPlay;
-(NSArray *)calls;
@end

