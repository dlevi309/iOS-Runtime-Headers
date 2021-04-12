/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UIStatusBarStyleRequest;

@interface SBAppStatusBarTransitionInfo : NSObject {

	UIStatusBarStyleRequest* _startStyleRequest;
	long long _startOrientation;
	UIStatusBarStyleRequest* _endStyleRequest;
	long long _endOrientation;
	int _transition;
	BOOL _zoomOther;

}

@property (nonatomic,copy) UIStatusBarStyleRequest * startStyleRequest;              //@synthesize startStyleRequest=_startStyleRequest - In the implementation block
@property (assign,nonatomic) long long startOrientation;                             //@synthesize startOrientation=_startOrientation - In the implementation block
@property (nonatomic,copy) UIStatusBarStyleRequest * endStyleRequest;                //@synthesize endStyleRequest=_endStyleRequest - In the implementation block
@property (assign,nonatomic) long long endOrientation;                               //@synthesize endOrientation=_endOrientation - In the implementation block
@property (assign,nonatomic) int transition;                                         //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) BOOL zoomOther;                                         //@synthesize zoomOther=_zoomOther - In the implementation block
-(id)description;
-(void)setTransition:(int)arg1 ;
-(int)transition;
-(UIStatusBarStyleRequest *)endStyleRequest;
-(UIStatusBarStyleRequest *)startStyleRequest;
-(void)setStartStyleRequest:(UIStatusBarStyleRequest *)arg1 ;
-(long long)startOrientation;
-(void)setStartOrientation:(long long)arg1 ;
-(void)setEndStyleRequest:(UIStatusBarStyleRequest *)arg1 ;
-(long long)endOrientation;
-(void)setEndOrientation:(long long)arg1 ;
-(BOOL)zoomOther;
-(void)setZoomOther:(BOOL)arg1 ;
@end

