/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@protocol InfoDiagramCablingAnchorDelegate;
@class CAShapeLayer, CAGradientLayer, NSString;

@interface InfoDiagramCablingLayer : CALayer <CALayerDelegate> {

	id<InfoDiagramCablingAnchorDelegate> diagramAnchorPointDelegate;
	BOOL swapCabling;
	BOOL isCompactWidth;
	CAShapeLayer* internetInnerLineLayer;
	CAShapeLayer* internetOuterLineLayer;
	CAGradientLayer* internetGradientLayer;
	CAShapeLayer* broadbandToWANInnerLineLayer;
	CAShapeLayer* broadbandToWANOuterLineLayer;
	CAShapeLayer* swapArcLineLayer;
	CAShapeLayer* swapArcArrowLayer;

}

@property (assign,nonatomic) id<InfoDiagramCablingAnchorDelegate> diagramAnchorPointDelegate; 
@property (assign,nonatomic) BOOL swapCabling; 
@property (assign,nonatomic) BOOL isCompactWidth; 
@property (nonatomic,retain) CAShapeLayer * internetInnerLineLayer; 
@property (nonatomic,retain) CAShapeLayer * internetOuterLineLayer; 
@property (nonatomic,retain) CAGradientLayer * internetGradientLayer; 
@property (nonatomic,retain) CAShapeLayer * broadbandToWANInnerLineLayer; 
@property (nonatomic,retain) CAShapeLayer * broadbandToWANOuterLineLayer; 
@property (nonatomic,retain) CAShapeLayer * swapArcLineLayer; 
@property (nonatomic,retain) CAShapeLayer * swapArcArrowLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)commonInit;
-(void)layoutSublayers;
-(id)initNoWANLinkFirstFrame;
-(void)setDiagramAnchorPointDelegate:(id<InfoDiagramCablingAnchorDelegate>)arg1 ;
-(void)setIsCompactWidth:(BOOL)arg1 ;
-(id)initNoWANLinkLastFrame;
-(void)setSwapCabling:(BOOL)arg1 ;
-(void)setInternetOuterLineLayer:(CAShapeLayer *)arg1 ;
-(void)setInternetInnerLineLayer:(CAShapeLayer *)arg1 ;
-(void)setInternetGradientLayer:(CAGradientLayer *)arg1 ;
-(void)setBroadbandToWANOuterLineLayer:(CAShapeLayer *)arg1 ;
-(void)setBroadbandToWANInnerLineLayer:(CAShapeLayer *)arg1 ;
-(void)setSwapArcLineLayer:(CAShapeLayer *)arg1 ;
-(void)setSwapArcArrowLayer:(CAShapeLayer *)arg1 ;
-(void)createPathForSublayer:(id)arg1 ;
-(BOOL)swapCabling;
-(id<InfoDiagramCablingAnchorDelegate>)diagramAnchorPointDelegate;
-(CAShapeLayer *)internetOuterLineLayer;
-(CAShapeLayer *)internetInnerLineLayer;
-(CAGradientLayer *)internetGradientLayer;
-(CAShapeLayer *)broadbandToWANInnerLineLayer;
-(CAShapeLayer *)broadbandToWANOuterLineLayer;
-(CAShapeLayer *)swapArcLineLayer;
-(CAShapeLayer *)swapArcArrowLayer;
-(BOOL)isCompactWidth;
@end

