/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JFXRemoteCommandServerDelegate;
@class NSDistributedNotificationCenter;

@interface JFXRemoteCommandServer : NSObject {

	id<JFXRemoteCommandServerDelegate> _delegate;
	NSDistributedNotificationCenter* _distributedNotificationCenter;

}

@property (assign,nonatomic,__weak) id<JFXRemoteCommandServerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDistributedNotificationCenter * distributedNotificationCenter;              //@synthesize distributedNotificationCenter=_distributedNotificationCenter - In the implementation block
-(id<JFXRemoteCommandServerDelegate>)delegate;
-(NSDistributedNotificationCenter *)distributedNotificationCenter;
-(void)setDelegate:(id<JFXRemoteCommandServerDelegate>)arg1 ;
-(void)setDistributedNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)onRemoveEffectsNotification:(id)arg1 ;
-(void)onSetAnimojiNotification:(id)arg1 ;
-(void)onSetMemojiWithContentsOfFileNotification:(id)arg1 ;
-(void)onSetFilterWithIdentifierNotification:(id)arg1 ;
-(void)onGetEffectsRequest:(id)arg1 ;
-(void)onGetEffectsResponse:(id)arg1 ;
-(void)onOpenProjectPickerNotification:(id)arg1 ;
-(void)onOpenProjectNotification:(id)arg1 ;
-(void)onNewProjectNotification:(id)arg1 ;
-(void)onPlayNotification:(id)arg1 ;
-(void)onPlayClipAtIndexNotification:(id)arg1 ;
-(void)onRecordNotification:(id)arg1 ;
-(void)onExportProjectNotification:(id)arg1 ;
-(void)onExportProjectResponseNotification:(id)arg1 ;
-(void)onAddPosterWithIdentifierNotification:(id)arg1 ;
-(void)onAddPosterWithNameNotification:(id)arg1 ;
-(void)onAddEffectWithIdentifierNotification:(id)arg1 ;
-(void)onAddEffectWithNameNotification:(id)arg1 ;
-(void)onAddShapeWithIdentifierNotification:(id)arg1 ;
-(void)onAddStickerNotification:(id)arg1 ;
-(void)onAddStickerWithIdentifierNotification:(id)arg1 ;
-(void)onAddTextNotification:(id)arg1 ;
@end

