/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <UIKitCore/UIGestureRecognizer.h>

@interface ADTapGestureRecognizer : UIGestureRecognizer {

	long long _finalTrackingID;
	/*^block*/id _touchDownHandler;
	/*^block*/id _touchMovedHandler;
	/*^block*/id _touchUpHandler;

}

@property (assign,nonatomic) long long finalTrackingID;              //@synthesize finalTrackingID=_finalTrackingID - In the implementation block
@property (nonatomic,copy) id touchDownHandler;                      //@synthesize touchDownHandler=_touchDownHandler - In the implementation block
@property (nonatomic,copy) id touchMovedHandler;                     //@synthesize touchMovedHandler=_touchMovedHandler - In the implementation block
@property (nonatomic,copy) id touchUpHandler;                        //@synthesize touchUpHandler=_touchUpHandler - In the implementation block
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)finalTrackingID;
-(void)setFinalTrackingID:(long long)arg1 ;
-(id)touchDownHandler;
-(void)setTouchDownHandler:(id)arg1 ;
-(id)touchMovedHandler;
-(void)setTouchMovedHandler:(id)arg1 ;
-(id)touchUpHandler;
-(void)setTouchUpHandler:(id)arg1 ;
@end

