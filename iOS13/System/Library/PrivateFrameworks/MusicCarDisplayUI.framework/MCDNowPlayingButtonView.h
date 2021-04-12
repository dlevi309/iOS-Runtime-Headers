/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAMLParserDelegate.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

@interface MCDNowPlayingButtonView : UIView <CAMLParserDelegate> {

	CALayer* _animatedGlyphLayer;
	CAStateController* _stateController;
	NSMutableArray* _barLayers;
	CALayer* _platterLayer;
	BOOL _highlighted;
	NSString* _stateName;

}

@property (nonatomic,copy) NSString * stateName;                                 //@synthesize stateName=_stateName - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classSubstitions;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateColors;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2 ;
-(void)setStateName:(NSString *)arg1 ;
-(NSString *)stateName;
-(void)_handleGlyphLayerDidLoad:(id)arg1 ;
-(id)initWithCAML:(id)arg1 ;
@end

