/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
*/


@class NSArray, NSString;

@interface VOSCommandCategory : NSObject {

	NSArray* _commands;
	NSString* _localizedCategoryName;

}

@property (nonatomic,retain) NSArray * commands;                            //@synthesize commands=_commands - In the implementation block
@property (nonatomic,retain) NSString * localizedCategoryName;              //@synthesize localizedCategoryName=_localizedCategoryName - In the implementation block
+(id)interaction;
+(id)editing;
+(id)system;
+(id)output;
+(id)scrolling;
+(id)other;
+(id)allCategories;
+(id)basicNavigation;
+(id)textNavigation;
+(id)advancedNavigation;
+(id)rotor;
+(id)speechAndAudio;
+(id)voiceOverFeatures;
+(id)internalOnly;
+(id)handwriting;
+(id)brailleScreenInput;
+(BOOL)categories:(id)arg1 containsCommand:(id)arg2 ;
-(id)init;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)initWithCommands:(id)arg1 localizedCategoryName:(id)arg2 ;
-(BOOL)containsCommand:(id)arg1 ;
@end

