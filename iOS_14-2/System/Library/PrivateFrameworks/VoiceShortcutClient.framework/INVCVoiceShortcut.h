/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

@class NSString, INShortcut;


@protocol INVCVoiceShortcut <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * phrase; 
@property (nonatomic,readonly) INShortcut * shortcut; 
@required
-(INShortcut *)shortcut;
-(NSString *)phrase;
-(NSString *)identifier;

@end

