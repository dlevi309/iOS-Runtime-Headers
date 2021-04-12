/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, CLKImageProvider;

@interface CLKComplicationTemplateModularLargeTable : CLKComplicationTemplate {

	BOOL _useNoColumnPadding;
	CLKTextProvider* _headerTextProvider;
	CLKTextProvider* _row1Column1TextProvider;
	CLKTextProvider* _row1Column2TextProvider;
	CLKTextProvider* _row2Column1TextProvider;
	CLKTextProvider* _row2Column2TextProvider;
	CLKImageProvider* _headerImageProvider;
	long long _column2Alignment;

}

@property (assign,nonatomic) BOOL useNoColumnPadding;                              //@synthesize useNoColumnPadding=_useNoColumnPadding - In the implementation block
@property (nonatomic,copy) CLKTextProvider * headerTextProvider;                   //@synthesize headerTextProvider=_headerTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row1Column1TextProvider;              //@synthesize row1Column1TextProvider=_row1Column1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row1Column2TextProvider;              //@synthesize row1Column2TextProvider=_row1Column2TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row2Column1TextProvider;              //@synthesize row2Column1TextProvider=_row2Column1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row2Column2TextProvider;              //@synthesize row2Column2TextProvider=_row2Column2TextProvider - In the implementation block
@property (nonatomic,copy) CLKImageProvider * headerImageProvider;                 //@synthesize headerImageProvider=_headerImageProvider - In the implementation block
@property (assign,nonatomic) long long column2Alignment;                           //@synthesize column2Alignment=_column2Alignment - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
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
-(CLKTextProvider *)headerTextProvider;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(CLKImageProvider *)headerImageProvider;
-(void)setHeaderImageProvider:(CLKImageProvider *)arg1 ;
-(BOOL)useNoColumnPadding;
-(void)setUseNoColumnPadding:(BOOL)arg1 ;
@end

