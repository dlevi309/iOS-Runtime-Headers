/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setGroupTitle:(NSString *)arg1 ;
-(NSString *)groupTitle;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)initWithGroupTitle:(id)arg1 commands:(id)arg2 ;
@end

