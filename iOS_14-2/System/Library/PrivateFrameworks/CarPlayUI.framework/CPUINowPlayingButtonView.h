/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAMLParserDelegate.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

@interface CPUINowPlayingButtonView : UIView <CAMLParserDelegate> {

	CALayer* _animatedGlyphLayer;
	CAStateController* _stateController;
	NSMutableArray* _barLayers;
	CALayer* _platterLayer;
	BOOL _highlighted;
	unsigned _playbackState;
	NSString* _stateName;

}

@property (nonatomic,copy) NSString * stateName;                                 //@synthesize stateName=_stateName - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                             //@synthesize playbackState=_playbackState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classSubstitions;
-(void)setPlaybackState:(unsigned)arg1 ;
-(void)_updateColors;
-(unsigned)playbackState;
-(void)_handleGlyphLayerDidLoad:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(NSString *)stateName;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setStateName:(NSString *)arg1 ;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithCAML:(id)arg1 ;
@end

