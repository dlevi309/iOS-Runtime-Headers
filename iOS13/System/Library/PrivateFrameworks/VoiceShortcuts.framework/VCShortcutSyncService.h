/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

@class NSString, NSURL;


@protocol VCShortcutSyncService <NSObject>
@property (nonatomic,copy,readonly) NSString * syncServiceIdentifier; 
@property (nonatomic,copy,readonly) NSURL * directoryURL; 
@required
-(NSURL *)directoryURL;
-(void)requestSync;
-(void)requestFullResync;
-(NSString *)syncServiceIdentifier;

@end

