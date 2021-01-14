/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
@class NFLFontCache, NSDictionary;

@interface NFLAbstractCellProperties : NSObject {

	NFLFontCache* _fontCache;
	double _scaleValue;
	long long _rowSpan;
	NSDictionary* _layout;
	NSDictionary* _columnIrrespectiveProperties;

}

@property (nonatomic,retain) NSDictionary * layout;                                    //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSDictionary * columnIrrespectiveProperties;              //@synthesize columnIrrespectiveProperties=_columnIrrespectiveProperties - In the implementation block
@property (nonatomic,retain) NFLFontCache * fontCache;                                 //@synthesize fontCache=_fontCache - In the implementation block
@property (assign,nonatomic) double scaleValue;                                        //@synthesize scaleValue=_scaleValue - In the implementation block
@property (nonatomic,readonly) long long rowSpan;                                      //@synthesize rowSpan=_rowSpan - In the implementation block
-(long long)rowSpan;
-(NFLFontCache *)fontCache;
-(double)scaleValue;
-(void)setFontCache:(NFLFontCache *)arg1 ;
-(void)setLayout:(NSDictionary *)arg1 ;
-(NSDictionary *)layout;
-(id)initWithLayout:(id)arg1 columnIrrespectiveProperties:(id)arg2 fontCache:(id)arg3 scaleValue:(double)arg4 ;
-(CGSize)sizeForPropertyKey:(id)arg1 ;
-(id)numberForPropertyKey:(id)arg1 ;
-(id)numberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1 ;
-(NSDictionary *)columnIrrespectiveProperties;
-(double)scaledValueForValue:(double)arg1 fontID:(id)arg2 ;
-(CGSize)scaledSizeForPropertyKey:(id)arg1 ;
-(id)scaledNumberForPropertyKey:(id)arg1 ;
-(id)scaledNumberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1 ;
-(id)arrayForPropertyKey:(id)arg1 ;
-(id)dictionaryForPropertyKey:(id)arg1 columnSpan:(long long)arg2 ;
-(id)stringForPropertyKey:(id)arg1 ;
-(id)stringForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1 ;
-(double)fontWeightForFontID:(id)arg1 ;
-(BOOL)fontCondensedForFontID:(id)arg1 ;
-(double)scaledFontSizeForFontID:(id)arg1 ;
-(double)lineHeightForFont:(id)arg1 locale:(id)arg2 ;
-(void)setScaleValue:(double)arg1 ;
-(void)setColumnIrrespectiveProperties:(NSDictionary *)arg1 ;
@end

