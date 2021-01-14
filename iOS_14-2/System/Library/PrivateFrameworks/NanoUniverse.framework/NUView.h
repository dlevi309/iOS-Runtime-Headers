/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOpaque:(BOOL)arg1 ;
-(NUScene *)scene;
-(void)setScene:(NUScene *)arg1 ;
-(void)startAnimation;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<NUViewDelegate>)delegate;
-(void)setDelegate:(id<NUViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)stopAnimation;
-(void)setAnimationFrameInterval:(int)arg1 ;
-(void)dealloc;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(void)quadViewWillDisplay:(id)arg1 forTime:(double)arg2 ;
-(id)quadView;
-(id)provideAtlasBacking:(id)arg1 ;
-(id)resourceProviderKey;
@end

