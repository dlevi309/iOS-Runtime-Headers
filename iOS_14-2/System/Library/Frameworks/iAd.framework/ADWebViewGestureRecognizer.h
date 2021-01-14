/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface ADWebViewGestureRecognizer : UIGestureRecognizer {

	BOOL _shouldBlockNavigation;
	BOOL _pointIsInsideView;
	long long _lastTrackedTouch;
	double _mostRecentTapTimestamp;
	CGPoint _mostRecentTapLocation;
	CGPoint _location;

}

@property (assign,nonatomic) long long lastTrackedTouch;                   //@synthesize lastTrackedTouch=_lastTrackedTouch - In the implementation block
@property (assign,nonatomic) double mostRecentTapTimestamp;                //@synthesize mostRecentTapTimestamp=_mostRecentTapTimestamp - In the implementation block
@property (nonatomic,readonly) CGPoint location;                           //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL pointIsInsideView;                     //@synthesize pointIsInsideView=_pointIsInsideView - In the implementation block
@property (nonatomic,readonly) BOOL shouldBlockNavigation;                 //@synthesize shouldBlockNavigation=_shouldBlockNavigation - In the implementation block
@property (nonatomic,readonly) CGPoint mostRecentTapLocation;              //@synthesize mostRecentTapLocation=_mostRecentTapLocation - In the implementation block
@property (nonatomic,readonly) BOOL wasViewTappedRecently; 
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(CGPoint)location;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)wasViewTappedRecently;
-(CGPoint)mostRecentTapLocation;
-(BOOL)shouldBlockNavigation;
-(void)setLastTrackedTouch:(long long)arg1 ;
-(void)setMostRecentTapTimestamp:(double)arg1 ;
-(long long)lastTrackedTouch;
-(double)mostRecentTapTimestamp;
-(BOOL)pointIsInsideView;
@end

