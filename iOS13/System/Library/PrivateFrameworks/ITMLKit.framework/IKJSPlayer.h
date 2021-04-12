/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKJSPlayer.h>
@class NSString, IKJSPlaylist, IKJSMediaItem, NSNumber, NSDate, IKDOMDocument, NSArray, NSDictionary;


@protocol IKJSPlayer <JSExport>
@property (nonatomic,readonly) NSString * playbackState; 
@property (nonatomic,retain) IKJSPlaylist * playlist; 
@property (nonatomic,readonly) IKJSMediaItem * currentMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * nextMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * previousMediaItem; 
@property (nonatomic,readonly) NSNumber * currentMediaItemDuration; 
@property (nonatomic,readonly) NSDate * currentMediaItemDate; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) BOOL muted; 
@property (nonatomic,retain) IKDOMDocument * overlayDocument; 
@property (nonatomic,retain) IKDOMDocument * interactiveOverlayDocument; 
@property (assign,nonatomic) BOOL interactiveOverlayDismissable; 
@property (nonatomic,readonly) NSArray * currentMediaItemAccessLogs; 
@property (nonatomic,readonly) NSArray * currentMediaItemErrorLogs; 
@property (nonatomic,copy) NSDictionary * contextMenuData; 
@property (assign,nonatomic) BOOL showsResumeMenu; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@required
-(id)init;
-(NSDictionary *)userInfo;
-(void)pause;
-(void)stop;
-(void)setUserInfo:(id)arg1;
-(void)next;
-(void)previous;
-(void)play;
-(void)present;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1;
-(void)seekToTime:(double)arg1;
-(double)playbackRate;
-(void)setPlaybackRate:(double)arg1;
-(NSString *)playbackState;
-(IKJSPlaylist *)playlist;
-(void)setPlaylist:(id)arg1;
-(BOOL)showsResumeMenu;
-(void)setShowsResumeMenu:(BOOL)arg1;
-(IKDOMDocument *)overlayDocument;
-(void)setOverlayDocument:(id)arg1;
-(IKDOMDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(id)arg1;
-(BOOL)interactiveOverlayDismissable;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1;
-(NSDictionary *)contextMenuData;
-(void)setContextMenuData:(id)arg1;
-(void)changeToMediaAtIndex:(unsigned long long)arg1;
-(NSNumber *)currentMediaItemDuration;
-(NSDate *)currentMediaItemDate;
-(IKJSMediaItem *)currentMediaItem;
-(IKJSMediaItem *)nextMediaItem;
-(IKJSMediaItem *)previousMediaItem;
-(NSArray *)currentMediaItemAccessLogs;
-(NSArray *)currentMediaItemErrorLogs;

@end


@class NSString, IKJSPlaylist, IKJSMediaItem, NSNumber, NSDate, IKDOMDocument, NSArray, NSDictionary, NSMutableDictionary, IKAppPlayerBridge;

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer> {

	IKJSPlaylist* _playlist;
	long long _playerState;
	BOOL _holdingSelfReference;
	NSMutableDictionary* _timedMetadataListeners;
	NSMutableDictionary* _timeListeners;
	NSMutableDictionary* _boundaryListeners;
	IKAppPlayerBridge* _bridge;

}

@property (nonatomic,readonly) IKAppPlayerBridge * bridge;                            //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSString * playbackState; 
@property (nonatomic,retain) IKJSPlaylist * playlist; 
@property (nonatomic,readonly) IKJSMediaItem * currentMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * nextMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * previousMediaItem; 
@property (nonatomic,readonly) NSNumber * currentMediaItemDuration; 
@property (nonatomic,readonly) NSDate * currentMediaItemDate; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) BOOL muted; 
@property (nonatomic,retain) IKDOMDocument * overlayDocument; 
@property (nonatomic,retain) IKDOMDocument * interactiveOverlayDocument; 
@property (assign,nonatomic) BOOL interactiveOverlayDismissable; 
@property (nonatomic,readonly) NSArray * currentMediaItemAccessLogs; 
@property (nonatomic,readonly) NSArray * currentMediaItemErrorLogs; 
@property (nonatomic,copy) NSDictionary * contextMenuData; 
@property (assign,nonatomic) BOOL showsResumeMenu; 
@property (nonatomic,retain) NSDictionary * userInfo; 
-(id)init;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(void)pause;
-(void)stop;
-(long long)state;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)next;
-(void)previous;
-(void)play;
-(void)present;
-(BOOL)dispatchEvent:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(IKAppPlayerBridge *)bridge;
-(double)playbackRate;
-(void)setPlaybackRate:(double)arg1 ;
-(void)addEventListener:(id)arg1 :(id)arg2 :(id)arg3 ;
-(NSString *)playbackState;
-(IKJSPlaylist *)playlist;
-(void)setPlaylist:(IKJSPlaylist *)arg1 ;
-(BOOL)showsResumeMenu;
-(void)setShowsResumeMenu:(BOOL)arg1 ;
-(IKDOMDocument *)overlayDocument;
-(void)setOverlayDocument:(IKDOMDocument *)arg1 ;
-(IKDOMDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(IKDOMDocument *)arg1 ;
-(BOOL)interactiveOverlayDismissable;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1 ;
-(NSDictionary *)contextMenuData;
-(void)setContextMenuData:(NSDictionary *)arg1 ;
-(void)changeToMediaAtIndex:(unsigned long long)arg1 ;
-(NSNumber *)currentMediaItemDuration;
-(NSDate *)currentMediaItemDate;
-(IKJSMediaItem *)currentMediaItem;
-(IKJSMediaItem *)nextMediaItem;
-(IKJSMediaItem *)previousMediaItem;
-(NSArray *)currentMediaItemAccessLogs;
-(NSArray *)currentMediaItemErrorLogs;
-(id)initWithAppContext:(id)arg1 bridge:(id)arg2 ;
-(void)removeEventListener:(id)arg1 :(id)arg2 ;
-(BOOL)_timedMetadataDidChangeWithExtraInfo:(id)arg1 ;
-(void)_removeManagedReference;
-(void)_addManagedReference;
@end

