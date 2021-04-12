/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIWebViewportHandlerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIWebViewportHandler : NSObject {

	BOOL _initialConfigurationHasBeenSentToDelegate;
	UIWebViewportConfiguration _defaultConfiguration;
	UIWebViewportConfiguration _configuration;
	unsigned _webkitDefinedConfigurationFlags;
	CGSize _availableViewSize;
	CGSize _viewportArgumentsSize;
	BOOL _widthIsDeviceWidth;
	BOOL _heightIsDeviceHeight;
	BOOL _isInUpdateBlock;
	BOOL _classicViewportMode;
	id<_UIWebViewportHandlerDelegate> _delegate;
	CGRect _documentBounds;

}

@property (assign,nonatomic) id<_UIWebViewportHandlerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect documentBounds;                                              //@synthesize documentBounds=_documentBounds - In the implementation block
@property (nonatomic,readonly) CGSize availableViewSize;                                           //@synthesize availableViewSize=_availableViewSize - In the implementation block
@property (nonatomic,readonly) float initialScale; 
@property (nonatomic,readonly) float minimumScale; 
@property (nonatomic,readonly) float maximumScale; 
@property (nonatomic,readonly) BOOL allowsUserScaling; 
@property (nonatomic,readonly) unsigned webkitDefinedConfigurationFlags;                           //@synthesize webkitDefinedConfigurationFlags=_webkitDefinedConfigurationFlags - In the implementation block
@property (getter=isClassicViewportMode,nonatomic,readonly) BOOL classicViewportMode;              //@synthesize classicViewportMode=_classicViewportMode - In the implementation block
@property (nonatomic,readonly) BOOL avoidsUnsafeArea; 
@property (nonatomic,readonly) UIWebViewportConfiguration rawViewConfiguration; 
-(id<_UIWebViewportHandlerDelegate>)delegate;
-(void)setDelegate:(id<_UIWebViewportHandlerDelegate>)arg1 ;
-(float)minimumScale;
-(CGRect)documentBounds;
-(void)setDocumentBounds:(CGRect)arg1 ;
-(float)initialScale;
-(void)update:(/*^block*/id)arg1 ;
-(BOOL)allowsUserScaling;
-(float)maximumScale;
-(double)integralScaleForScale:(double)arg1 keepingPointFixed:(CGPoint*)arg2 ;
-(BOOL)isClassicViewportMode;
-(float)minimumScaleForViewSize:(CGSize)arg1 ;
-(CGSize)availableViewSize;
-(void)clearWebKitViewportConfigurationFlags;
-(void)resetViewportConfiguration:(const UIWebViewportConfiguration*)arg1 ;
-(UIWebViewportConfiguration)rawViewConfiguration;
-(unsigned)webkitDefinedConfigurationFlags;
-(float)viewportWidth;
-(float)viewportHeight;
-(void)applyWebKitViewportArgumentsSize:(CGSize)arg1 initialScale:(float)arg2 minimumScale:(float)arg3 maximumScale:(float)arg4 allowsUserScaling:(float)arg5 allowsShrinkToFit:(float)arg6 viewportFit:(id)arg7 ;
-(void)overrideViewportConfiguration:(const UIWebViewportConfiguration*)arg1 ;
-(void)setAvailableViewSize:(CGSize)arg1 updateConfigurationSize:(BOOL)arg2 ;
-(double)integralInitialScale;
-(BOOL)shouldIgnoreScalingConstraints;
-(BOOL)shouldIgnoreVerticalScalingConstraints;
-(BOOL)shouldIgnoreHorizontalScalingConstraints;
-(BOOL)avoidsUnsafeArea;
-(void)_resolveViewSizeRelativeLengths;
@end

