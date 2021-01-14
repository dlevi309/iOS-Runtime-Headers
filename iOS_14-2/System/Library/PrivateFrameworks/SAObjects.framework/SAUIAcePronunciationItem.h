/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAUIAcePronunciationItem : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * tts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acePronunciationItem;
+(id)acePronunciationItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)tts;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTts:(NSString *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)title;
@end

