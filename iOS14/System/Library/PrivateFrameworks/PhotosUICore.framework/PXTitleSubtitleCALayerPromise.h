/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCALayerPromise.h>
#import <libobjc.A.dylib/PXMutableTitleSubtitleCALayerPromise.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSString, PXTitleSubtitleLabelSpec, NSArray;

@interface PXTitleSubtitleCALayerPromise : PXCALayerPromise <PXMutableTitleSubtitleCALayerPromise, CALayerDelegate> {

	BOOL _diagnosticsEnabled;
	NSString* _titleText;
	NSString* _subtitleText;
	PXTitleSubtitleLabelSpec* _spec;
	long long _typesettingMode;
	double _layerLastBaseline;
	double __textScaleFactor;
	NSArray* _diagnosticsRenderedLines;
	CGRect _layerContentBounds;

}

@property (nonatomic,readonly) double _textScaleFactor;                              //@synthesize _textScaleFactor=__textScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL diagnosticsEnabled;                                //@synthesize diagnosticsEnabled=_diagnosticsEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * diagnosticsRenderedLines;              //@synthesize diagnosticsRenderedLines=_diagnosticsRenderedLines - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleText;                            //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitleText;                         //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,readonly) PXTitleSubtitleLabelSpec * spec;                      //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) long long typesettingMode;                            //@synthesize typesettingMode=_typesettingMode - In the implementation block
@property (nonatomic,readonly) CGRect layerContentBounds;                            //@synthesize layerContentBounds=_layerContentBounds - In the implementation block
@property (nonatomic,readonly) double layerLastBaseline;                             //@synthesize layerLastBaseline=_layerLastBaseline - In the implementation block
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) double contentsScale; 
@property (assign,nonatomic) BOOL rendersAsynchronously; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpec:(PXTitleSubtitleLabelSpec *)arg1 ;
-(BOOL)diagnosticsEnabled;
-(id)init;
-(void)setTypesettingMode:(long long)arg1 ;
-(long long)typesettingMode;
-(CGRect)layerContentBounds;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(id)_linesToRenderWithContext:(CGContextRef)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(PXTitleSubtitleLabelSpec *)spec;
-(NSString *)subtitleText;
-(double)_textScaleFactor;
-(void)drawLayerContentInContext:(CGContextRef)arg1 ;
-(NSArray *)diagnosticsRenderedLines;
-(id)_stringByReplacingNonbreakableWhitespaceToAllowLineWrapping:(id)arg1 maxWidth:(double)arg2 ;
-(id)_attributedStringForLabelWithText:(id)arg1 spec:(id)arg2 ;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(id)createCustomLayer;
-(void)performChanges:(/*^block*/id)arg1 ;
-(double)layerLastBaseline;
@end

