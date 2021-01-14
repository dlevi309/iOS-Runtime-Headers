/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVPictureInPictureCALayerHostView;

@interface AVPictureInPictureSampleBufferDisplayLayerHostView : UIView {

	BOOL _needsGeometryUpdate;
	BOOL _deferringGeometryUpdates;
	AVPictureInPictureCALayerHostView* _hostView;
	CGSize _imageQueueSize;
	CGSize _contentDimensions;
	CGRect _lastKnownFrame;
	CGRect _lastKnownBounds;

}

@property (nonatomic,readonly) AVPictureInPictureCALayerHostView * hostView;                               //@synthesize hostView=_hostView - In the implementation block
@property (assign,nonatomic) CGSize imageQueueSize;                                                        //@synthesize imageQueueSize=_imageQueueSize - In the implementation block
@property (assign,nonatomic) CGSize contentDimensions;                                                     //@synthesize contentDimensions=_contentDimensions - In the implementation block
@property (assign,nonatomic) CGRect lastKnownFrame;                                                        //@synthesize lastKnownFrame=_lastKnownFrame - In the implementation block
@property (assign,nonatomic) CGRect lastKnownBounds;                                                       //@synthesize lastKnownBounds=_lastKnownBounds - In the implementation block
@property (assign,nonatomic) BOOL needsGeometryUpdate;                                                     //@synthesize needsGeometryUpdate=_needsGeometryUpdate - In the implementation block
@property (assign,getter=isDeferringGeometryUpdates,nonatomic) BOOL deferringGeometryUpdates;              //@synthesize deferringGeometryUpdates=_deferringGeometryUpdates - In the implementation block
@property (assign,nonatomic) unsigned contextId; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned)contextId;
-(void)setFrame:(CGRect)arg1 contentDimensions:(CGSize)arg2 imageQueueSize:(CGSize)arg3 ;
-(CGSize)imageQueueSize;
-(void)setImageQueueSize:(CGSize)arg1 ;
-(CGRect)lastKnownFrame;
-(void)setLastKnownFrame:(CGRect)arg1 ;
-(CGRect)lastKnownBounds;
-(void)setLastKnownBounds:(CGRect)arg1 ;
-(BOOL)needsGeometryUpdate;
-(void)setNeedsGeometryUpdate:(BOOL)arg1 ;
-(BOOL)isDeferringGeometryUpdates;
-(void)setDeferringGeometryUpdates:(BOOL)arg1 ;
-(void)setContextId:(unsigned)arg1 ;
-(void)setContentDimensions:(CGSize)arg1 ;
-(CGSize)contentDimensions;
-(void)layoutSubviews;
-(void)_updateGeometryIfNeeded;
-(AVPictureInPictureCALayerHostView *)hostView;
@end

