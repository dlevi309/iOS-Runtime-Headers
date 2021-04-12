/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/


#import <AirPortAssistant/AirPortAssistant-Structs.h>
@class CALayer, NSMutableArray, NSArray;

@interface NetTopoMiniStaticLayout : NSObject {

	id _owningView;
	int _layoutOptions;
	CALayer* _containerLayer;
	NSMutableArray* _topoDeviceLayers;
	NSMutableArray* _connectionLayers;
	NSArray* _topoDevicesDescriptor;

}

@property (nonatomic,retain) NSArray * topoDevicesDescriptor;              //@synthesize topoDevicesDescriptor=_topoDevicesDescriptor - In the implementation block
@property (nonatomic,retain) CALayer * containerLayer;                     //@synthesize containerLayer=_containerLayer - In the implementation block
@property (nonatomic,readonly) NSArray * topoDeviceLayers;                 //@synthesize topoDeviceLayers=_topoDeviceLayers - In the implementation block
@property (assign,nonatomic) int layoutOptions;                            //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,retain) id owningView; 
-(void)dealloc;
-(int)layoutOptions;
-(id)owningView;
-(void)setOwningView:(id)arg1 ;
-(void)performLayout;
-(void)setLayoutOptions:(int)arg1 ;
-(CALayer *)containerLayer;
-(NSArray *)topoDevicesDescriptor;
-(id)initWithContainerLayer:(id)arg1 andOptions:(int)arg2 ;
-(void)setContainerLayer:(CALayer *)arg1 ;
-(void)createLayoutForDevices:(id)arg1 ;
-(void)destroyDeviceLayers;
-(void)setTopoDevicesDescriptor:(NSArray *)arg1 ;
-(CGImageRef)imageForDeviceSpec:(id)arg1 wantSmall:(BOOL)arg2 forContentsScale:(double)arg3 ;
-(NSArray *)topoDeviceLayers;
@end

