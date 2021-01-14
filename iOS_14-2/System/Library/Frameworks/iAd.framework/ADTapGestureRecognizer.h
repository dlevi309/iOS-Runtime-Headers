/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTouchUpHandler:(id)arg1 ;
-(void)setTouchDownHandler:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(long long)finalTrackingID;
-(id)touchDownHandler;
-(void)setTouchMovedHandler:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)touchUpHandler;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setFinalTrackingID:(long long)arg1 ;
-(id)touchMovedHandler;
@end

