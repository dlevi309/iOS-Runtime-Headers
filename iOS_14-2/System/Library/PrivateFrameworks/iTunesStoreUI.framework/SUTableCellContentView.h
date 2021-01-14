/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SUCellConfigurationView.h>

@class UIBezierPath, SUCellConfiguration, UIView, NSMutableArray, NSString;

@interface SUTableCellContentView : UIView <SUCellConfigurationView> {

	int _clipCorners;
	UIBezierPath* _clipPath;
	SUCellConfiguration* _configuration;
	unsigned _drawAsDisabled : 1;
	unsigned _highlighted : 1;
	unsigned _highlightsOnlyContentView : 1;
	UIView* _overlayView;
	NSMutableArray* _subviews;
	unsigned _useSubviewLayout : 1;

}

@property (assign,nonatomic) BOOL usesSubviews; 
@property (assign,nonatomic) int clipCorners;                                                                 //@synthesize clipCorners=_clipCorners - In the implementation block
@property (nonatomic,retain) SUCellConfiguration * configuration;                                             //@synthesize configuration=_configuration - In the implementation block
@property (assign,getter=isDeleteConfirmationVisible,nonatomic) BOOL deleteConfirmationVisisble; 
@property (assign,nonatomic) BOOL drawAsDisabled; 
@property (assign,nonatomic) BOOL highlightsOnlyContentView; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClipCorners:(int)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(SUCellConfiguration *)configuration;
-(BOOL)isHighlighted;
-(int)clipCorners;
-(void)dealloc;
-(void)setConfiguration:(SUCellConfiguration *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setDeleteConfirmationVisisble:(BOOL)arg1 ;
-(void)setUsesSubviews:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)highlightsOnlyContentView;
-(id)_clipPath;
-(BOOL)drawAsDisabled;
-(void)setDrawAsDisabled:(BOOL)arg1 ;
-(void)setHighlightsOnlyContentView:(BOOL)arg1 ;
-(BOOL)usesSubviews;
-(void)setUsesSubviews:(BOOL)arg1 ;
-(void)_reloadSubviewsForConfiguration;
-(BOOL)isDeleteConfirmationVisible;
-(void)reloadView;
-(void)_reloadSubviewAlphasAnimated:(BOOL)arg1 ;
-(void)_updateDisabledStyleForSubviews;
-(void)_stopUsingSubviewLayout;
-(void)_startUsingSubviewLayout;
-(id)_clippedImageForImage:(id)arg1 ;
-(void)_removeSubviewsForConfiguration;
@end

