/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIWindow, NSMapTable;

@interface _UIFeedbackVisualizer : NSObject {

	UIWindow* _visualFeedbackWindow;
	NSMapTable* _engineLayers;

}

@property (nonatomic,retain) UIWindow * visualFeedbackWindow;              //@synthesize visualFeedbackWindow=_visualFeedbackWindow - In the implementation block
@property (nonatomic,retain) NSMapTable * engineLayers;                    //@synthesize engineLayers=_engineLayers - In the implementation block
+(id)sharedVisualizer;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)addEngine:(id)arg1 ;
-(NSMapTable *)engineLayers;
-(void)showVisualForFeedback:(id)arg1 withDelay:(double)arg2 ;
-(void)cancelVisualForFeedback:(id)arg1 ;
-(void)_updateEngine:(id)arg1 ;
-(id)_colorForFeedback:(id)arg1 ;
-(id)_colorForEngine:(id)arg1 ;
-(id)_monogramForEngine:(id)arg1 ;
-(void)setEngineLayers:(NSMapTable *)arg1 ;
-(id)_colorForEngineState:(long long)arg1 ;
-(void)_showVisualForFeedback:(id)arg1 ;
-(UIWindow *)visualFeedbackWindow;
-(void)setVisualFeedbackWindow:(UIWindow *)arg1 ;
@end

