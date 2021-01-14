/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/TSDRepDirectLayerHostProvider.h>

@class CALayer, NSString;

@interface SXTangierRepDirectLayerHostProvider : NSObject <TSDRepDirectLayerHostProvider> {

	CALayer* _aboveRepsLayerHost;
	CALayer* _underRepsLayerHost;
	CALayer* _overlayLayerHost;

}

@property (nonatomic,retain) CALayer * aboveRepsLayerHost;              //@synthesize aboveRepsLayerHost=_aboveRepsLayerHost - In the implementation block
@property (nonatomic,retain) CALayer * underRepsLayerHost;              //@synthesize underRepsLayerHost=_underRepsLayerHost - In the implementation block
@property (nonatomic,retain) CALayer * overlayLayerHost;                //@synthesize overlayLayerHost=_overlayLayerHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAboveRepsLayerHost:(CALayer *)arg1 ;
-(void)directLayerHostUpdateAdditionalLayersUnderRepLayers:(id)arg1 ;
-(void)setUnderRepsLayerHost:(CALayer *)arg1 ;
-(void)directLayerHostUpdateAdditionalLayersAboveRepLayers:(id)arg1 ;
-(void)directLayerHostUpdateRepOverlayLayers:(id)arg1 ;
-(CALayer *)aboveRepsLayerHost;
-(id)directLayerHostForRep:(id)arg1 ;
-(CALayer *)overlayLayerHost;
-(void)setOverlayLayerHost:(CALayer *)arg1 ;
-(CALayer *)underRepsLayerHost;
@end

