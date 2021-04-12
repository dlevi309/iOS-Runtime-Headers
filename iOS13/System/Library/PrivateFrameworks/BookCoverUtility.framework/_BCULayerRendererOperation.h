/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/

#import <libobjc.A.dylib/BCUOperation.h>

@protocol BCUPurgeableImage;
@class BCULayerRenderer, CALayer, NSString;

@interface _BCULayerRendererOperation : NSObject <BCUOperation> {

	Aq _operationId;
	unsigned _cancelled : 1;
	unsigned _configuring : 1;
	BOOL _waitForCPUSynchronization;
	float _priority;
	BCULayerRenderer* _renderer;
	/*^block*/id _layerBlock;
	/*^block*/id _completion;
	CALayer* _layer;
	id<BCUPurgeableImage> _result;

}

@property (nonatomic,retain) BCULayerRenderer * renderer;                   //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,copy) id layerBlock;                                   //@synthesize layerBlock=_layerBlock - In the implementation block
@property (nonatomic,copy) id completion;                                   //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) CALayer * layer;                               //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) id<BCUPurgeableImage> result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) BOOL waitForCPUSynchronization;              //@synthesize waitForCPUSynchronization=_waitForCPUSynchronization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float priority;                                //@synthesize priority=_priority - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)start;
-(id<BCUPurgeableImage>)result;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(void)setResult:(id<BCUPurgeableImage>)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(BCULayerRenderer *)renderer;
-(void)setRenderer:(BCULayerRenderer *)arg1 ;
-(id)initWithRenderer:(id)arg1 priority:(float)arg2 waitForCPUSynchronization:(BOOL)arg3 layerBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)configureLayer;
-(void)completeWithImage:(id)arg1 ;
-(long long)_compareHoldingStateLock:(id)arg1 ;
-(id)layerBlock;
-(void)setLayerBlock:(id)arg1 ;
-(BOOL)waitForCPUSynchronization;
@end

