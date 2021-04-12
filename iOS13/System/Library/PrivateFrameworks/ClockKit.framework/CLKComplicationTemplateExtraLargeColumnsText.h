/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateExtraLargeColumnsText : CLKComplicationTemplate {

	BOOL _highlightColumn2;
	CLKTextProvider* _row1Column1TextProvider;
	CLKTextProvider* _row1Column2TextProvider;
	CLKTextProvider* _row2Column1TextProvider;
	CLKTextProvider* _row2Column2TextProvider;
	long long _column2Alignment;

}

@property (nonatomic,copy) CLKTextProvider * row1Column1TextProvider;              //@synthesize row1Column1TextProvider=_row1Column1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row1Column2TextProvider;              //@synthesize row1Column2TextProvider=_row1Column2TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row2Column1TextProvider;              //@synthesize row2Column1TextProvider=_row2Column1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row2Column2TextProvider;              //@synthesize row2Column2TextProvider=_row2Column2TextProvider - In the implementation block
@property (assign,nonatomic) long long column2Alignment;                           //@synthesize column2Alignment=_column2Alignment - In the implementation block
@property (assign,nonatomic) BOOL highlightColumn2;                                //@synthesize highlightColumn2=_highlightColumn2 - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBOOLKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(CLKTextProvider *)row1Column1TextProvider;
-(void)setRow1Column1TextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)row1Column2TextProvider;
-(void)setRow1Column2TextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)row2Column1TextProvider;
-(void)setRow2Column1TextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)row2Column2TextProvider;
-(void)setRow2Column2TextProvider:(CLKTextProvider *)arg1 ;
-(long long)column2Alignment;
-(void)setColumn2Alignment:(long long)arg1 ;
-(BOOL)highlightColumn2;
-(void)setHighlightColumn2:(BOOL)arg1 ;
@end

