/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(NSArray *)regions;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setRegions:(NSArray *)arg1 ;
@end

