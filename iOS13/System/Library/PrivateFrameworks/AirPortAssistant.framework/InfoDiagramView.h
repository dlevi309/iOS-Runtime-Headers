/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/InfoDiagramCablingAnchorDelegate.h>

@class AUImageView, AULabel, UIView, NSString;

@interface InfoDiagramView : UIView <InfoDiagramCablingAnchorDelegate> {

	AUImageView* broadbandImageView;
	AULabel* broadbandLabel;
	AULabel* internetLabel;
	AULabel* portLabel;
	AUImageView* wanConnectedBaseImageView;
	AULabel* wanConnectedBaseLabel;
	AUImageView* replacementBaseImageView;
	AULabel* replacementBaseLabel;
	AUImageView* insetImageView;
	UIView* fixedCablingFrameView;
	UIView* animatingCablingFrameView;
	unsigned wanBaseProductID;
	unsigned replacementProductID;
	long long sizeClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 wanConnectedBaseProductID:(unsigned)arg2 replacementProductID:(unsigned)arg3 ;
-(void)setWANConnectedBaseLabelString:(id)arg1 ;
-(void)startAnimatingCablingLayer;
-(CGPoint)swapArcLineStartPoint;
-(CGPoint)swapArcLineEndPoint;
-(CGPoint)internetPoint;
-(CGPoint)broadbandInPoint;
-(CGPoint)broadbandOutPoint;
-(CGPoint)wanConnectedBaseWANPoint;
-(CGPoint)swapArcControlPoint;
-(CGPoint)swapArcControlPoint1;
-(CGPoint)swapArcControlPoint2;
-(id)initWithFrame:(CGRect)arg1 wanConnectedBaseProductID:(unsigned)arg2 ;
-(void)stopAnimatingCablingLayer;
@end

