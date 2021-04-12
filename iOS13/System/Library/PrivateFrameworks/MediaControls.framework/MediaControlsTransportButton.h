/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaPlayer/MPButton.h>

@class MPCPlayerCommandRequest;

@interface MediaControlsTransportButton : MPButton {

	BOOL _shouldPresentActionSheet;
	BOOL _performingHighlightAnimation;
	MPCPlayerCommandRequest* _touchUpInsideCommandRequest;
	MPCPlayerCommandRequest* _holdBeginCommandRequest;
	MPCPlayerCommandRequest* _holdEndCommandRequest;
	double _cursorScale;

}

@property (nonatomic,retain) MPCPlayerCommandRequest * touchUpInsideCommandRequest;                                  //@synthesize touchUpInsideCommandRequest=_touchUpInsideCommandRequest - In the implementation block
@property (nonatomic,retain) MPCPlayerCommandRequest * holdBeginCommandRequest;                                      //@synthesize holdBeginCommandRequest=_holdBeginCommandRequest - In the implementation block
@property (nonatomic,retain) MPCPlayerCommandRequest * holdEndCommandRequest;                                        //@synthesize holdEndCommandRequest=_holdEndCommandRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentActionSheet;                                                          //@synthesize shouldPresentActionSheet=_shouldPresentActionSheet - In the implementation block
@property (getter=isPerformingHighlightAnimation,nonatomic,readonly) BOOL performingHighlightAnimation;              //@synthesize performingHighlightAnimation=_performingHighlightAnimation - In the implementation block
@property (assign,nonatomic) double cursorScale;                                                                     //@synthesize cursorScale=_cursorScale - In the implementation block
+(BOOL)_cursorInteractionEnabled;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(BOOL)shouldPresentActionSheet;
-(MPCPlayerCommandRequest *)touchUpInsideCommandRequest;
-(MPCPlayerCommandRequest *)holdBeginCommandRequest;
-(MPCPlayerCommandRequest *)holdEndCommandRequest;
-(void)setTouchUpInsideCommandRequest:(MPCPlayerCommandRequest *)arg1 ;
-(void)setHoldBeginCommandRequest:(MPCPlayerCommandRequest *)arg1 ;
-(void)setHoldEndCommandRequest:(MPCPlayerCommandRequest *)arg1 ;
-(void)setShouldPresentActionSheet:(BOOL)arg1 ;
-(void)setCursorScale:(double)arg1 ;
-(BOOL)isPerformingHighlightAnimation;
-(double)cursorScale;
@end

