/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationModuleView.h>
#import <libobjc.A.dylib/NTKTemplateComplicationDisplay.h>

@class NSDate, CLKComplicationTemplate, NSString;

@interface NTKModularTemplateView : NTKComplicationModuleView <NTKTemplateComplicationDisplay> {

	NSDate* _timeTravelDate;
	CLKComplicationTemplate* _complicationTemplate;
	unsigned long long _highlightMode;

}

@property (nonatomic,retain) CLKComplicationTemplate * complicationTemplate;                         //@synthesize complicationTemplate=_complicationTemplate - In the implementation block
@property (readonly) NSDate * timeTravelDate;                                                        //@synthesize timeTravelDate=_timeTravelDate - In the implementation block
@property (assign,nonatomic) unsigned long long highlightMode;                                       //@synthesize highlightMode=_highlightMode - In the implementation block
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(void)_update;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2 ;
-(CLKComplicationTemplate *)complicationTemplate;
-(void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5 ;
-(unsigned long long)highlightMode;
-(void)setHighlightMode:(unsigned long long)arg1 ;
-(NSDate *)timeTravelDate;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)setComplicationTemplate:(CLKComplicationTemplate *)arg1 ;
-(void)setContainsOverrideFaceColor:(id)arg1 ;
-(void)_propagateColorSchemeToSubviews:(id)arg1 ;
-(void)_setColorScheme:(id)arg1 propagateToSubviews:(BOOL)arg2 ;
-(BOOL)_useInvertedHighlightForColorScheme:(id)arg1 ;
-(void)_enumerateColoringViewsSubviewsWithBlock:(/*^block*/id)arg1 invertedHighlight:(BOOL)arg2 ;
@end

