/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class IKAppPlayerBridge, NSNumber, NSDate, IKAppDocument, NSArray, NSDictionary;


@protocol IKAppPlayer <NSObject>
@property (nonatomic,readonly) IKAppPlayerBridge * bridge; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,retain) id<IKAppPlaylist> playlist; 
@property (nonatomic,readonly) NSNumber * currentMediaItemDuration; 
@property (nonatomic,readonly) NSDate * currentMediaItemDate; 
@property (nonatomic,readonly) id<IKAppMediaItem> currentMediaItem; 
@property (nonatomic,readonly) double scanRate; 
@property (assign,nonatomic) BOOL muted; 
@property (assign,nonatomic) BOOL showsResumeMenu; 
@property (nonatomic,readonly) id<IKAppMediaItem> nextMediaItem; 
@property (nonatomic,readonly) id<IKAppMediaItem> previousMediaItem; 
@property (nonatomic,retain) IKAppDocument * overlayDocument; 
@property (nonatomic,retain) IKAppDocument * interactiveOverlayDocument; 
@property (assign,nonatomic) BOOL interactiveOverlayDismissable; 
@property (nonatomic,readonly) NSArray * currentMediaItemAccessLogs; 
@property (nonatomic,readonly) NSArray * currentMediaItemErrorLogs; 
@property (nonatomic,copy) NSDictionary * contextMenuData; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@required
-(NSDictionary *)userInfo;
-(void)pause;
-(void)stop;
-(long long)state;
-(void)setUserInfo:(id)arg1;
-(void)next;
-(void)previous;
-(void)cleanup;
-(void)play;
-(void)present;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1;
-(double)scanRate;
-(void)scan:(double)arg1;
-(IKAppPlayerBridge *)bridge;
-(void)setElapsedTime:(double)arg1;
-(id<IKAppPlaylist>)playlist;
-(void)setPlaylist:(id)arg1;
-(BOOL)showsResumeMenu;
-(void)setShowsResumeMenu:(BOOL)arg1;
-(IKAppDocument *)overlayDocument;
-(void)setOverlayDocument:(id)arg1;
-(IKAppDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(id)arg1;
-(BOOL)interactiveOverlayDismissable;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1;
-(NSDictionary *)contextMenuData;
-(void)setContextMenuData:(id)arg1;
-(void)startObservingEvent:(id)arg1 extraInfo:(id)arg2;
-(void)changeToMediaAtIndex:(long long)arg1;
-(void)stopObservingEvent:(id)arg1;
-(NSNumber *)currentMediaItemDuration;
-(NSDate *)currentMediaItemDate;
-(id<IKAppMediaItem>)currentMediaItem;
-(id<IKAppMediaItem>)nextMediaItem;
-(id<IKAppMediaItem>)previousMediaItem;
-(NSArray *)currentMediaItemAccessLogs;
-(NSArray *)currentMediaItemErrorLogs;

@end

