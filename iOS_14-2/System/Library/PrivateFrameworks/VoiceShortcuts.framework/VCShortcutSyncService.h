/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

@class NSString, NSURL;


@protocol VCShortcutSyncService <NSObject>
@property (nonatomic,copy,readonly) NSString * syncServiceIdentifier; 
@property (nonatomic,copy,readonly) NSURL * directoryURL; 
@required
-(void)requestFullResync;
-(void)requestSync;
-(NSURL *)directoryURL;
-(NSString *)syncServiceIdentifier;

@end

