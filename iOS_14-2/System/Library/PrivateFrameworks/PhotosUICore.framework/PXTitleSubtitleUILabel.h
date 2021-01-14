/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class NSString, PXTitleSubtitleLabelSpec, PXTitleSubtitleCALayerPromise, CALayer, NSArray;

@interface PXTitleSubtitleUILabel : UIView <PXChangeObserver> {

	BOOL _needsUpdateLayerPromise;
	BOOL _rendersTextAsynchronously;
	BOOL _shouldRasterizeTextLayer;
	BOOL _diagnosticsEnabled;
	NSString* _titleText;
	NSString* _subtitleText;
	PXTitleSubtitleLabelSpec* _spec;
	long long _typesettingMode;
	PXTitleSubtitleCALayerPromise* __layerPromise;
	CALayer* __contentLayer;

}

@property (setter=_setLayerPromise:,nonatomic,retain) PXTitleSubtitleCALayerPromise * _layerPromise;              //@synthesize _layerPromise=__layerPromise - In the implementation block
@property (setter=_setContentLayer:,nonatomic,retain) CALayer * _contentLayer;                                    //@synthesize _contentLayer=__contentLayer - In the implementation block
@property (assign,nonatomic) BOOL diagnosticsEnabled;                                                             //@synthesize diagnosticsEnabled=_diagnosticsEnabled - In the implementation block
@property (nonatomic,readonly) NSArray * diagnosticsRenderedLines; 
@property (nonatomic,copy) NSString * titleText;                                                                  //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                                               //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) PXTitleSubtitleLabelSpec * spec;                                                     //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) long long typesettingMode;                                                           //@synthesize typesettingMode=_typesettingMode - In the implementation block
@property (assign,nonatomic) BOOL rendersTextAsynchronously;                                                      //@synthesize rendersTextAsynchronously=_rendersTextAsynchronously - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeTextLayer;                                                       //@synthesize shouldRasterizeTextLayer=_shouldRasterizeTextLayer - In the implementation block
@property (nonatomic,readonly) double lastBaseline; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)contentBounds;
-(void)setSpec:(PXTitleSubtitleLabelSpec *)arg1 ;
-(BOOL)diagnosticsEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTypesettingMode:(long long)arg1 ;
-(long long)typesettingMode;
-(double)lastBaseline;
-(NSString *)titleText;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(PXTitleSubtitleLabelSpec *)spec;
-(NSString *)subtitleText;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)_PXTitleSubtitleUILabelCommonInitialization;
-(void)_handleChangeFromBounds:(CGRect)arg1 ;
-(void)setShouldRasterizeTextLayer:(BOOL)arg1 ;
-(void)_setLayerPromise:(id)arg1 ;
-(void)_setContentLayer:(id)arg1 ;
-(void)_invalidateLayerPromise;
-(void)_updateLayerPromiseIfNeeded;
-(BOOL)shouldRasterizeTextLayer;
-(PXTitleSubtitleCALayerPromise *)_layerPromise;
-(NSArray *)diagnosticsRenderedLines;
-(id)initWithCoder:(id)arg1 ;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(void)setRendersTextAsynchronously:(BOOL)arg1 ;
-(BOOL)rendersTextAsynchronously;
-(CALayer *)_contentLayer;
-(void)_updateContentLayer;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

