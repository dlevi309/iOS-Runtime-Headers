/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)transition;
-(void)setTransition:(int)arg1 ;
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

