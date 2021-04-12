/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOwningView:(id)arg1 ;
-(void)performLayout;
-(id)owningView;
-(int)layoutOptions;
-(void)setLayoutOptions:(int)arg1 ;
-(void)dealloc;
-(NSArray *)topoDevicesDescriptor;
-(id)initWithContainerLayer:(id)arg1 andOptions:(int)arg2 ;
-(void)setContainerLayer:(CALayer *)arg1 ;
-(void)createLayoutForDevices:(id)arg1 ;
-(void)destroyDeviceLayers;
-(CALayer *)containerLayer;
-(void)setTopoDevicesDescriptor:(NSArray *)arg1 ;
-(CGImageRef)imageForDeviceSpec:(id)arg1 wantSmall:(BOOL)arg2 forContentsScale:(double)arg3 ;
-(NSArray *)topoDeviceLayers;
@end

