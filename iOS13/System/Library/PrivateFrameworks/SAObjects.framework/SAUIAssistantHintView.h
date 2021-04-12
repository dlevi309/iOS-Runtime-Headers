/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUIAssistantUtteranceView.h>

@class NSArray;

@interface SAUIAssistantHintView : SAUIAssistantUtteranceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * regions; 
+(id)assistantHintView;
+(id)assistantHintViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)regions;
-(void)setRegions:(NSArray *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

