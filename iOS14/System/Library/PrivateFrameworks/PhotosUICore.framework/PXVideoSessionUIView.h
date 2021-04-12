/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXVideoViewDelegate.h>

@protocol PXVideoSessionUIViewDelegate;
@class UIView, PXVideoView, UIImageView, PXVideoSession, UIImage, NSString;

@interface PXVideoSessionUIView : UIView <PXVideoViewDelegate> {

	UIView* _videoContainerView;
	PXVideoView* _adoptedVideoView;
	UIImageView* _placeholderImageView;
	BOOL _placeholderVisible;
	BOOL _allowsEdgeAntialiasing;
	PXVideoSession* _videoSession;
	UIImage* _placeholderImage;
	id<PXVideoSessionUIViewDelegate> _delegate;
	NSString* _videoGravity;
	CGRect _contentsRect;

}

@property (assign,nonatomic) BOOL placeholderVisible;                                       //@synthesize placeholderVisible=_placeholderVisible - In the implementation block
@property (nonatomic,retain) PXVideoSession * videoSession;                                 //@synthesize videoSession=_videoSession - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                    //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) BOOL isVideoLayerReadyForDisplay; 
@property (assign,nonatomic,__weak) id<PXVideoSessionUIViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGRect contentsRect;                                           //@synthesize contentsRect=_contentsRect - In the implementation block
@property (assign,nonatomic) BOOL allowsEdgeAntialiasing;                                   //@synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing - In the implementation block
@property (nonatomic,copy) NSString * videoGravity;                                         //@synthesize videoGravity=_videoGravity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)allowsEdgeAntialiasing;
-(void)setVideoGravity:(NSString *)arg1 ;
-(NSString *)videoGravity;
-(CGRect)contentsRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXVideoSessionUIViewDelegate>)delegate;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)setDelegate:(id<PXVideoSessionUIViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setVideoSession:(PXVideoSession *)arg1 ;
-(PXVideoSession *)videoSession;
-(UIImage *)placeholderImage;
-(void)_updatePlaceholderVisibility;
-(void)videoViewReadinessDidChange:(id)arg1 ;
-(void)_updateVideoViewFrame;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(id)generateSnapshotImage;
-(void)_updateEdgeAntialiasing;
-(BOOL)placeholderVisible;
-(void)setPlaceholderVisible:(BOOL)arg1 ;
-(BOOL)isVideoLayerReadyForDisplay;
-(void)setContentMode:(long long)arg1 ;
-(void)dealloc;
@end

