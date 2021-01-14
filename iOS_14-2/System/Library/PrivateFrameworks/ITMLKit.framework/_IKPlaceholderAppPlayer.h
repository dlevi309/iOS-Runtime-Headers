/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKAppPlayer.h>

@protocol IKAppPlaylist, IKAppMediaItem;
@class IKAppPlayerBridge, NSNumber, NSDate, IKAppDocument, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface _IKPlaceholderAppPlayer : NSObject <IKAppPlayer> {

	NSMutableDictionary* _eventExtraInfoByEvent;
	BOOL muted;
	BOOL showsResumeMenu;
	BOOL interactiveOverlayDismissable;
	IKAppPlayerBridge* bridge;
	long long state;
	id<IKAppPlaylist> playlist;
	NSNumber* currentMediaItemDuration;
	NSDate* currentMediaItemDate;
	id<IKAppMediaItem> currentMediaItem;
	double scanRate;
	id<IKAppMediaItem> nextMediaItem;
	id<IKAppMediaItem> previousMediaItem;
	IKAppDocument* overlayDocument;
	IKAppDocument* interactiveOverlayDocument;
	NSArray* currentMediaItemAccessLogs;
	NSArray* currentMediaItemErrorLogs;
	NSDictionary* contextMenuData;
	NSDictionary* userInfo;

}

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)next;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)previous;
-(void)setElapsedTime:(double)arg1 ;
-(id<IKAppMediaItem>)currentMediaItem;
-(NSDictionary *)userInfo;
-(void)scan:(double)arg1 ;
-(IKAppPlayerBridge *)bridge;
-(void)present;
-(void)pause;
-(void)play;
-(void)stop;
-(void)setMuted:(BOOL)arg1 ;
-(void)cleanup;
-(id<IKAppPlaylist>)playlist;
-(double)scanRate;
-(long long)state;
-(void)setPlaylist:(id<IKAppPlaylist>)arg1 ;
-(BOOL)muted;
-(id<IKAppMediaItem>)nextMediaItem;
-(id<IKAppMediaItem>)previousMediaItem;
-(BOOL)showsResumeMenu;
-(void)setShowsResumeMenu:(BOOL)arg1 ;
-(IKAppDocument *)overlayDocument;
-(void)setOverlayDocument:(IKAppDocument *)arg1 ;
-(IKAppDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(IKAppDocument *)arg1 ;
-(BOOL)interactiveOverlayDismissable;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1 ;
-(NSDictionary *)contextMenuData;
-(void)setContextMenuData:(NSDictionary *)arg1 ;
-(void)startObservingEvent:(id)arg1 extraInfo:(id)arg2 ;
-(void)changeToMediaAtIndex:(long long)arg1 ;
-(void)stopObservingEvent:(id)arg1 ;
-(NSNumber *)currentMediaItemDuration;
-(NSDate *)currentMediaItemDate;
-(NSArray *)currentMediaItemAccessLogs;
-(NSArray *)currentMediaItemErrorLogs;
-(void)transferValuesToAppPlayer:(id)arg1 ;
@end

