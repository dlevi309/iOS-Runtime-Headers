/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

@class NSString, INShortcut;


@protocol INVCVoiceShortcut <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * phrase; 
@property (nonatomic,readonly) INShortcut * shortcut; 
@required
-(NSString *)identifier;
-(INShortcut *)shortcut;
-(NSString *)phrase;

@end

