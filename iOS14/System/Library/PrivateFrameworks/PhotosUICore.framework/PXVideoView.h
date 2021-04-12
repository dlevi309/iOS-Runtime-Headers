/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXVideoViewDelegate;
@class ISWrappedAVPlayer, NSString, ISAVPlayerLayer;

@interface PXVideoView : UIView {

	ISWrappedAVPlayer* _player;
	SCD_Struct_PX38 _delegateRespondsTo;
	id<PXVideoViewDelegate> _delegate;
	NSString* _kvoProxyIdentifier;

}

@property (nonatomic,readonly) ISAVPlayerLayer * playerLayer; 
@property (nonatomic,copy) NSString * kvoProxyIdentifier;                          //@synthesize kvoProxyIdentifier=_kvoProxyIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<PXVideoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ISWrappedAVPlayer * player; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) BOOL videoIsReadyForDisplay; 
+(Class)layerClass;
-(ISWrappedAVPlayer *)player;
-(void)setPlayer:(ISWrappedAVPlayer *)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(NSString *)videoGravity;
-(id)init;
-(id<PXVideoViewDelegate>)delegate;
-(BOOL)videoIsReadyForDisplay;
-(void)_layerReadyForDisplayDidChange;
-(NSString *)kvoProxyIdentifier;
-(void)setKvoProxyIdentifier:(NSString *)arg1 ;
-(void)setDelegate:(id<PXVideoViewDelegate>)arg1 ;
-(void)dealloc;
-(ISAVPlayerLayer *)playerLayer;
@end

