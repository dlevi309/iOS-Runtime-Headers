/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSString, NSArray;

@interface CACOnboardingCommandGroup : NSObject {

	NSString* _groupTitle;
	NSArray* _commands;

}

@property (nonatomic,retain) NSString * groupTitle;              //@synthesize groupTitle=_groupTitle - In the implementation block
@property (nonatomic,retain) NSArray * commands;                 //@synthesize commands=_commands - In the implementation block
+(id)groupWithIdentifier:(id)arg1 ;
+(id)groupsFromIdentifiers:(id)arg1 ;
+(id)allCommandGroups;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setGroupTitle:(NSString *)arg1 ;
-(NSString *)groupTitle;
-(id)initWithGroupTitle:(id)arg1 commands:(id)arg2 ;
@end

