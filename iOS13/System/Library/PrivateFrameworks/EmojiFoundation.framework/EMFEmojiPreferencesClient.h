/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/

#import <EmojiFoundation/EMFEmojiPreferences.h>

@class NSXPCConnection, NSString;

@interface EMFEmojiPreferencesClient : EMFEmojiPreferences {

	NSXPCConnection* _connection;
	BOOL _isValid;
	NSString* _machName;

}

@property (nonatomic,retain) NSString * machName;              //@synthesize machName=_machName - In the implementation block
@property (assign,nonatomic) BOOL isValid;                     //@synthesize isValid=_isValid - In the implementation block
+(id)serviceInterface;
+(id)differentialPrivacyRecorderForEmoji:(id)arg1 usageMode:(id)arg2 ;
-(void)dealloc;
-(BOOL)isValid;
-(void)_disconnect;
-(void)didDisplaySkinToneHelp;
-(void)writeEmojiDefaults;
-(id)_initWithoutConnection;
-(void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2 ;
-(void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3 ;
-(void)didUseEmoji:(id)arg1 usageMode:(id)arg2 ;
-(NSString *)machName;
-(id)initWithMachName:(id)arg1 ;
-(void)didUseEmoji:(id)arg1 ;
-(void)createConnectionIfNecessary;
-(void)setMachName:(NSString *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
@end

