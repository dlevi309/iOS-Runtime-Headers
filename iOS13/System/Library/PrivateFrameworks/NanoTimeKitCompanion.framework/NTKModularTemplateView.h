/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(void)_update;
-(void)setHighlightMode:(unsigned long long)arg1 ;
-(unsigned long long)highlightMode;
-(void)setComplicationTemplate:(CLKComplicationTemplate *)arg1 ;
-(CLKComplicationTemplate *)complicationTemplate;
-(void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2 ;
-(void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5 ;
-(NSDate *)timeTravelDate;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)setContainsOverrideFaceColor:(id)arg1 ;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_propagateColorSchemeToSubviews:(id)arg1 ;
-(void)_setColorScheme:(id)arg1 propagateToSubviews:(BOOL)arg2 ;
-(BOOL)_useInvertedHighlightForColorScheme:(id)arg1 ;
-(void)_enumerateColoringViewsSubviewsWithBlock:(/*^block*/id)arg1 invertedHighlight:(BOOL)arg2 ;
@end

