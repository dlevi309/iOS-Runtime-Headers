/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <TVRemoteUI/TVRTouchProcessor.h>

@class _TVRMatchPointArtworkView, UITapGestureRecognizer;

@interface TVRMatchPointTouchProcessor : TVRTouchProcessor {

	_TVRMatchPointArtworkView* _artworkView;
	UITapGestureRecognizer* _tapGesture;
	long long _highlightedButtonType;

}

@property (nonatomic,retain) _TVRMatchPointArtworkView * artworkView;              //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                  //@synthesize tapGesture=_tapGesture - In the implementation block
@property (assign,nonatomic) long long highlightedButtonType;                      //@synthesize highlightedButtonType=_highlightedButtonType - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_handleTap:(id)arg1 ;
-(_TVRMatchPointArtworkView *)artworkView;
-(id)_artworkView;
-(UITapGestureRecognizer *)tapGesture;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)setTouchpadView:(id)arg1 ;
-(long long)_pressTypeForLocationInTouchpadView:(CGPoint)arg1 ;
-(void)_sendButtonPressToDelegate:(long long)arg1 ;
-(void)setArtworkView:(_TVRMatchPointArtworkView *)arg1 ;
-(long long)highlightedButtonType;
-(void)setHighlightedButtonType:(long long)arg1 ;
@end

