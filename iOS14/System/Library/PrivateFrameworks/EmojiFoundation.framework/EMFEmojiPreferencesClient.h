/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMachName:(NSString *)arg1 ;
-(void)_disconnect;
-(void)setIsValid:(BOOL)arg1 ;
-(BOOL)isValid;
-(id)initWithMachName:(id)arg1 ;
-(void)didDisplaySkinToneHelp;
-(void)writeEmojiDefaults;
-(id)_initWithoutConnection;
-(void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2 ;
-(void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3 ;
-(void)didUseEmoji:(id)arg1 usageMode:(id)arg2 ;
-(void)createConnectionIfNecessary;
-(NSString *)machName;
-(void)dealloc;
-(void)didUseEmoji:(id)arg1 ;
@end

