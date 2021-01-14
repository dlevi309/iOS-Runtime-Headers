/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class CAIAANodeContainer, UIPageControl, CAIAANodeInfo, NSTimer, NSString;

@interface CAInterAppAudioSwitcherView : UIView <UIScrollViewDelegate> {

	OpaqueAudioComponentInstanceRef outputUnit;
	CAIAANodeContainer* nodeView;
	UIPageControl* pageControl;
	CAIAANodeInfo* info;
	NSTimer* refreshTimer;
	BOOL showingAppNames;
	BOOL isHostConnected;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isShowingAppNames) BOOL showingAppNames; 
-(void)initialize;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(double)contentWidth;
-(void)startTimer;
-(void)didMoveToSuperview;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)audioUnitPropertyChangedListener:(void*)arg1 unit:(OpaqueAudioComponentInstanceRef)arg2 propID:(unsigned)arg3 scope:(unsigned)arg4 element:(unsigned)arg5 ;
-(void)appHasGoneInBackground;
-(void)appHasGoneForeground;
-(BOOL)isHostConnected;
-(void)setOutputAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 ;
-(void)updateInfo;
-(void)nodePressed:(id)arg1 ;
-(void)changePage:(id)arg1 ;
-(void)updateNodeList;
-(BOOL)isShowingAppNames;
-(void)setShowingAppNames:(BOOL)arg1 ;
@end

