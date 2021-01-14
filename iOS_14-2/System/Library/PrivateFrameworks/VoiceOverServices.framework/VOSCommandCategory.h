/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
*/


@class NSArray, NSString;

@interface VOSCommandCategory : NSObject {

	NSArray* _commands;
	NSString* _localizedCategoryName;

}

@property (nonatomic,retain) NSArray * commands;                            //@synthesize commands=_commands - In the implementation block
@property (nonatomic,retain) NSString * localizedCategoryName;              //@synthesize localizedCategoryName=_localizedCategoryName - In the implementation block
+(id)scrolling;
+(id)output;
+(id)rotor;
+(id)interaction;
+(id)other;
+(id)system;
+(id)editing;
+(id)allCategories;
+(id)basicNavigation;
+(id)textNavigation;
+(id)advancedNavigation;
+(id)speechAndAudio;
+(id)voiceOverFeatures;
+(id)internalOnly;
+(id)handwriting;
+(id)brailleScreenInput;
+(BOOL)categories:(id)arg1 containsCommand:(id)arg2 ;
-(id)init;
-(NSArray *)commands;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(void)setCommands:(NSArray *)arg1 ;
-(id)initWithCommands:(id)arg1 localizedCategoryName:(id)arg2 ;
-(BOOL)containsCommand:(id)arg1 ;
@end

