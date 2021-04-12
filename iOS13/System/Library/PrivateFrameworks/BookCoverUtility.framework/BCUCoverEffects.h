/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/


@class BCULayerRenderer, NSArray;

@interface BCUCoverEffects : NSObject {

	BCULayerRenderer* _renderer;
	NSArray* _bookFilters;
	NSArray* _seriesFilters;
	NSArray* _templateImageFilters;

}
+(id)_effectIdentifierForEffectIndex:(unsigned long long)arg1 ;
+(id)effectIdentifierForAsset:(id)arg1 withEnvironment:(id)arg2 ;
+(id)effectIdentifierForFilterInfo:(id)arg1 ;
-(id)initWithRenderer:(id)arg1 ;
-(id)bookCoverEffectFilters;
-(id)bookCoverEffectFilterForEffectIdentifier:(id)arg1 ;
-(id)seriesCoverEffectFilters;
-(id)templateImageFilters;
-(id)welcomeScreenBookCoverEffectFilters;
@end

