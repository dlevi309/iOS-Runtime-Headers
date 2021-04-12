/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
*/

#import <NanoUniverse/NanoUniverse-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKUIQuadViewDelegate.h>
#import <libobjc.A.dylib/CLKUIResourceProviderDelegate.h>

@protocol NUViewDelegate;
@class CLKDevice, CLKUIQuadView, CLKUIResourceProviderKey, NUResources, NUMetalQuad, NSBundle, NUScene, NSString;

@interface NUView : UIView <CLKUIQuadViewDelegate, CLKUIResourceProviderDelegate> {

	CLKDevice* _device;
	CLKUIQuadView* _quadView;
	CLKUIResourceProviderKey* _resourceProviderKey;
	NUResources* _resources;
	NUMetalQuad* _quad;
	NSBundle* _bundle;
	id<NUViewDelegate> _delegate;

}

@property (nonatomic,retain) NUScene * scene; 
@property (assign,nonatomic,__weak) id<NUViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NUViewDelegate>)delegate;
-(void)setDelegate:(id<NUViewDelegate>)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NUScene *)scene;
-(void)startAnimation;
-(void)stopAnimation;
-(void)setScene:(NUScene *)arg1 ;
-(void)setAnimationFrameInterval:(int)arg1 ;
-(id)resourceProviderKey;
-(void)quadViewWillDisplay:(id)arg1 forTime:(double)arg2 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(id)provideAtlasBacking:(id)arg1 ;
-(id)quadView;
@end

