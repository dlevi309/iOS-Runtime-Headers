/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableCALayerPromise.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class CALayer, NSString;

@interface PXCALayerPromise : PXObservable <PXMutableCALayerPromise, CALayerDelegate> {

	BOOL _startedLayerRealization;
	BOOL _rendersAsynchronously;
	BOOL _shouldCancel;
	double _contentsScale;
	CALayer* _layer;
	CGRect _bounds;

}

@property (setter=_setLayer:,nonatomic,retain) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) BOOL shouldCancel;                            //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double contentsScale;                         //@synthesize contentsScale=_contentsScale - In the implementation block
@property (nonatomic,readonly) BOOL rendersAsynchronously;                   //@synthesize rendersAsynchronously=_rendersAsynchronously - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(double)contentsScale;
-(CALayer *)layer;
-(id)init;
-(void)setContentsScale:(double)arg1 ;
-(BOOL)rendersAsynchronously;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)shouldCancel;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawLayerContentInContext:(CGContextRef)arg1 ;
-(id)mutableChangeObject;
-(id)createCustomLayer;
-(void)_setLayer:(id)arg1 ;
-(void)setRendersAsynchronously:(BOOL)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)startLayerRealization;
-(void)_realizeLayer;
-(void)_handlePreparedLayer:(id)arg1 ;
-(void)cancelLayerRealization;
-(void)invalidateLayer;
-(void)dealloc;
@end

