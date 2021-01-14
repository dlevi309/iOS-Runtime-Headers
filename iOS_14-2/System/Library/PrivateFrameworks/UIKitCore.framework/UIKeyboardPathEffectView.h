/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIKBHandwritingQuadCurvePointFIFO, NSMutableArray, NSMutableIndexSet, CADisplayLink;

@interface UIKeyboardPathEffectView : UIView {

	BOOL _increasedContrastEnabled;
	BOOL _done;
	UIKBHandwritingQuadCurvePointFIFO* _pointInterpolator;
	double _startTime;
	NSMutableArray* _paths;
	NSMutableIndexSet* _pointDecayQueue;
	CADisplayLink* _pointDecayDisplayLink;

}

@property (nonatomic,retain) UIKBHandwritingQuadCurvePointFIFO * pointInterpolator;              //@synthesize pointInterpolator=_pointInterpolator - In the implementation block
@property (assign,nonatomic) double startTime;                                                   //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * paths;                                             //@synthesize paths=_paths - In the implementation block
@property (assign,nonatomic) BOOL increasedContrastEnabled;                                      //@synthesize increasedContrastEnabled=_increasedContrastEnabled - In the implementation block
@property (assign,nonatomic) BOOL done;                                                          //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * pointDecayQueue;                                //@synthesize pointDecayQueue=_pointDecayQueue - In the implementation block
@property (nonatomic,retain) CADisplayLink * pointDecayDisplayLink;                              //@synthesize pointDecayDisplayLink=_pointDecayDisplayLink - In the implementation block
-(NSMutableArray *)paths;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(int)textEffectsVisibilityLevel;
-(long long)keyboardAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)_currentPath;
-(BOOL)done;
-(void)buildOut;
-(void)_displayLinkFired:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)increasedContrastEnabled;
-(void)setIncreasedContrastEnabled:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)setDone:(BOOL)arg1 ;
-(void)reset;
-(id)_pushNewPath;
-(NSMutableIndexSet *)pointDecayQueue;
-(void)setPointInterpolator:(UIKBHandwritingQuadCurvePointFIFO *)arg1 ;
-(void)_addDrawingPoint:(CGPoint)arg1 force:(double)arg2 sentinel:(BOOL)arg3 ;
-(UIKBHandwritingQuadCurvePointFIFO *)pointInterpolator;
-(void)setPointDecayQueue:(NSMutableIndexSet *)arg1 ;
-(void)accessibilityValueChanged:(id)arg1 ;
-(CADisplayLink *)pointDecayDisplayLink;
-(void)setPointDecayDisplayLink:(CADisplayLink *)arg1 ;
-(void)_clearPointInterpolators;
-(UIEdgeInsets)_currentThemeSettings;
-(double)startTime;
-(void)addPoint:(CGPoint)arg1 force:(double)arg2 timestamp:(double)arg3 ;
@end

