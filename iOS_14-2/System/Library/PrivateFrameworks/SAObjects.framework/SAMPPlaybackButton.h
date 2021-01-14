/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSArray;

@interface SAMPPlaybackButton : SAAceView

@property (nonatomic,copy) NSArray * pauseCommands; 
@property (nonatomic,copy) NSArray * playCommands; 
+(id)playbackButtonWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)playbackButton;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)pauseCommands;
-(void)setPauseCommands:(NSArray *)arg1 ;
-(NSArray *)playCommands;
-(void)setPlayCommands:(NSArray *)arg1 ;
@end

