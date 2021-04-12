/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <BaseBoardUI/BSUICAPackageView.h>

@class CALayer, NSTimer, UILabel;

@interface WGWidgetPinningTeachingAnimationView : BSUICAPackageView {

	unsigned long long _state;
	CALayer* _materialsLayer;
	CALayer* _pagesLayer;
	CALayer* _page1Layer;
	NSTimer* _timerToNextState;
	UILabel* _debugLabel;

}

@property (assign,setter=_setState:,nonatomic) unsigned long long state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) CALayer * materialsLayer;                                             //@synthesize materialsLayer=_materialsLayer - In the implementation block
@property (nonatomic,retain) CALayer * pagesLayer;                                                 //@synthesize pagesLayer=_pagesLayer - In the implementation block
@property (nonatomic,retain) CALayer * page1Layer;                                                 //@synthesize page1Layer=_page1Layer - In the implementation block
@property (setter=_setTimerToNextState:,nonatomic,retain) NSTimer * timerToNextState;              //@synthesize timerToNextState=_timerToNextState - In the implementation block
@property (nonatomic,retain) UILabel * debugLabel;                                                 //@synthesize debugLabel=_debugLabel - In the implementation block
-(id)init;
-(unsigned long long)state;
-(void)setDebugLabel:(UILabel *)arg1 ;
-(void)_setState:(unsigned long long)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)startAnimating;
-(void)stopAnimating;
-(UILabel *)debugLabel;
-(double)_durationForState:(unsigned long long)arg1 ;
-(unsigned long long)_stateFollowingState:(unsigned long long)arg1 ;
-(void)_setTimerToNextState:(id)arg1 ;
-(void)_updateMaterials;
-(CALayer *)materialsLayer;
-(void)setMaterialsLayer:(CALayer *)arg1 ;
-(CALayer *)pagesLayer;
-(void)setPagesLayer:(CALayer *)arg1 ;
-(CALayer *)page1Layer;
-(void)setPage1Layer:(CALayer *)arg1 ;
-(NSTimer *)timerToNextState;
@end

