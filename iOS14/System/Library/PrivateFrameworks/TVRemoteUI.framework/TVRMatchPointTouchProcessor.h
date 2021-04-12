/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_TVRMatchPointArtworkView *)artworkView;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(UITapGestureRecognizer *)tapGesture;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_handleTap:(id)arg1 ;
-(id)_artworkView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setArtworkView:(_TVRMatchPointArtworkView *)arg1 ;
-(void)setTouchpadView:(id)arg1 ;
-(long long)_pressTypeForLocationInTouchpadView:(CGPoint)arg1 ;
-(void)_sendButtonPressToDelegate:(long long)arg1 ;
-(long long)highlightedButtonType;
-(void)setHighlightedButtonType:(long long)arg1 ;
@end

