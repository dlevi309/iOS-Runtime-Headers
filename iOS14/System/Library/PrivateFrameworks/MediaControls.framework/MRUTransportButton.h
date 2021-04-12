/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaPlayer/MPButton.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class NSString, MPCPlayerCommandRequest, MRUVisualStylingProvider;

@interface MRUTransportButton : MPButton <MRUVisualStylingProviderObserver> {

	BOOL _shouldPresentActionSheet;
	NSString* _identifier;
	MPCPlayerCommandRequest* _touchUpInsideCommandRequest;
	MPCPlayerCommandRequest* _holdBeginCommandRequest;
	MPCPlayerCommandRequest* _holdEndCommandRequest;
	MRUVisualStylingProvider* _stylingProvider;
	double _cursorScale;

}

@property (nonatomic,copy) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) MPCPlayerCommandRequest * touchUpInsideCommandRequest;              //@synthesize touchUpInsideCommandRequest=_touchUpInsideCommandRequest - In the implementation block
@property (nonatomic,retain) MPCPlayerCommandRequest * holdBeginCommandRequest;                  //@synthesize holdBeginCommandRequest=_holdBeginCommandRequest - In the implementation block
@property (nonatomic,retain) MPCPlayerCommandRequest * holdEndCommandRequest;                    //@synthesize holdEndCommandRequest=_holdEndCommandRequest - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;                         //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentActionSheet;                                      //@synthesize shouldPresentActionSheet=_shouldPresentActionSheet - In the implementation block
@property (assign,nonatomic) double cursorScale;                                                 //@synthesize cursorScale=_cursorScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_cursorInteractionEnabled;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setCursorScale:(double)arg1 ;
-(void)setHoldEndCommandRequest:(MPCPlayerCommandRequest *)arg1 ;
-(void)setShouldPresentActionSheet:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHoldBeginCommandRequest:(MPCPlayerCommandRequest *)arg1 ;
-(void)prepareForReuse;
-(MPCPlayerCommandRequest *)holdBeginCommandRequest;
-(MPCPlayerCommandRequest *)touchUpInsideCommandRequest;
-(MPCPlayerCommandRequest *)holdEndCommandRequest;
-(double)cursorScale;
-(void)setTouchUpInsideCommandRequest:(MPCPlayerCommandRequest *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)shouldPresentActionSheet;
-(void)updateVisualStyling;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)visualStylingProviderDidChange:(id)arg1 ;
@end

