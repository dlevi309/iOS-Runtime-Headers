/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaPlayer/MPButton.h>

@class MPCPlayerCommandRequest, NSString;

@interface MediaControlsTransportButton : MPButton {

	BOOL _shouldPresentActionSheet;
	BOOL _performingHighlightAnimation;
	MPCPlayerCommandRequest* _touchUpInsideCommandRequest;
	MPCPlayerCommandRequest* _holdBeginCommandRequest;
	MPCPlayerCommandRequest* _holdEndCommandRequest;
	double _cursorScale;
	NSString* _identifier;

}

@property (nonatomic,retain) MPCPlayerCommandRequest * touchUpInsideCommandRequest;                                  //@synthesize touchUpInsideCommandRequest=_touchUpInsideCommandRequest - In the implementation block
@property (nonatomic,retain) MPCPlayerCommandRequest * holdBeginCommandRequest;                                      //@synthesize holdBeginCommandRequest=_holdBeginCommandRequest - In the implementation block
@property (nonatomic,retain) MPCPlayerCommandRequest * holdEndCommandRequest;                                        //@synthesize holdEndCommandRequest=_holdEndCommandRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentActionSheet;                                                          //@synthesize shouldPresentActionSheet=_shouldPresentActionSheet - In the implementation block
@property (getter=isPerformingHighlightAnimation,nonatomic,readonly) BOOL performingHighlightAnimation;              //@synthesize performingHighlightAnimation=_performingHighlightAnimation - In the implementation block
@property (assign,nonatomic) double cursorScale;                                                                     //@synthesize cursorScale=_cursorScale - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                                  //@synthesize identifier=_identifier - In the implementation block
+(BOOL)_cursorInteractionEnabled;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setCursorScale:(double)arg1 ;
-(void)setHoldEndCommandRequest:(MPCPlayerCommandRequest *)arg1 ;
-(void)setShouldPresentActionSheet:(BOOL)arg1 ;
-(void)setHoldBeginCommandRequest:(MPCPlayerCommandRequest *)arg1 ;
-(MPCPlayerCommandRequest *)holdBeginCommandRequest;
-(MPCPlayerCommandRequest *)touchUpInsideCommandRequest;
-(MPCPlayerCommandRequest *)holdEndCommandRequest;
-(double)cursorScale;
-(void)setTouchUpInsideCommandRequest:(MPCPlayerCommandRequest *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isPerformingHighlightAnimation;
-(BOOL)shouldPresentActionSheet;
-(void)setHighlighted:(BOOL)arg1 ;
@end

