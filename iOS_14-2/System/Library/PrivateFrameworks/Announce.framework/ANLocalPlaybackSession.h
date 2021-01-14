/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/ANLocalPlaybackSessionServiceInterfaceDelegate.h>

@protocol ANLocalPlaybackSessionDelegate;
@class NSXPCConnection, NSDictionary, NSString;

@interface ANLocalPlaybackSession : NSObject <ANLocalPlaybackSessionServiceInterfaceDelegate> {

	id<ANLocalPlaybackSessionDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSDictionary * lastPlayedAnnouncementInfo; 
@property (nonatomic,readonly) unsigned long long playbackState; 
@property (assign,nonatomic,__weak) id<ANLocalPlaybackSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<ANLocalPlaybackSessionDelegate>)delegate;
-(unsigned long long)playbackState;
-(void)setDelegate:(id<ANLocalPlaybackSessionDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)invalidate;
-(void)announcementsWillStartPlaying:(unsigned long long)arg1 ;
-(void)lastPlayedAnnouncementInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)announcementsStateUpdate:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)playAnnouncementsWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)playAnnouncementsWithOptions:(unsigned long long)arg1 startingAt:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)playAnnouncementsWithIDs:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stopPlayingAnnouncementsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)nextAnnouncementWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)previousAnnouncementWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)playAnnouncements;
-(void)stopPlayingAnnouncements;
-(NSDictionary *)lastPlayedAnnouncementInfo;
@end

