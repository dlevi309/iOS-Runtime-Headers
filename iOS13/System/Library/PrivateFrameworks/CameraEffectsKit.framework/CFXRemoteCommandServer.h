/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol CFXRemoteCommandServerDelegate;
@class NSDistributedNotificationCenter;

@interface CFXRemoteCommandServer : NSObject {

	id<CFXRemoteCommandServerDelegate> _delegate;
	NSDistributedNotificationCenter* _distributedNotificationCenter;

}

@property (assign,nonatomic,__weak) id<CFXRemoteCommandServerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDistributedNotificationCenter * distributedNotificationCenter;              //@synthesize distributedNotificationCenter=_distributedNotificationCenter - In the implementation block
-(id<CFXRemoteCommandServerDelegate>)delegate;
-(void)setDelegate:(id<CFXRemoteCommandServerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSDistributedNotificationCenter *)distributedNotificationCenter;
-(void)setDistributedNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
-(void)onAddShapeNotification:(id)arg1 ;
-(void)onAddStickerNotification:(id)arg1 ;
-(void)onAddTextNotification:(id)arg1 ;
-(void)onRemoveEffectsNotification:(id)arg1 ;
-(void)onSetAnimojiNotification:(id)arg1 ;
-(void)onSetFilterNotification:(id)arg1 ;
@end

