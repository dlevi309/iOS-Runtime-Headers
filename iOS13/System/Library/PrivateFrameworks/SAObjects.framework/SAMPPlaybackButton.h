/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSArray;

@interface SAMPPlaybackButton : SAAceView

@property (nonatomic,copy) NSArray * pauseCommands; 
@property (nonatomic,copy) NSArray * playCommands; 
+(id)playbackButton;
+(id)playbackButtonWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)playCommands;
-(void)setPlayCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)pauseCommands;
-(void)setPauseCommands:(NSArray *)arg1 ;
@end

