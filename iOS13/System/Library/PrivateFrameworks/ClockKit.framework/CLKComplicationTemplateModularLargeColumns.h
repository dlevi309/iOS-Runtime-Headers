/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, CLKImageProvider;

@interface CLKComplicationTemplateModularLargeColumns : CLKComplicationTemplate {

	BOOL _useNoColumnPadding;
	CLKTextProvider* _row1Column1TextProvider;
	CLKTextProvider* _row1Column2TextProvider;
	CLKTextProvider* _row2Column1TextProvider;
	CLKTextProvider* _row2Column2TextProvider;
	CLKTextProvider* _row3Column1TextProvider;
	CLKTextProvider* _row3Column2TextProvider;
	CLKImageProvider* _row1ImageProvider;
	CLKImageProvider* _row2ImageProvider;
	CLKImageProvider* _row3ImageProvider;
	long long _column2Alignment;

}

@property (assign,nonatomic) BOOL useNoColumnPadding;                              //@synthesize useNoColumnPadding=_useNoColumnPadding - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row1Column1TextProvider;              //@synthesize row1Column1TextProvider=_row1Column1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row1Column2TextProvider;              //@synthesize row1Column2TextProvider=_row1Column2TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row2Column1TextProvider;              //@synthesize row2Column1TextProvider=_row2Column1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row2Column2TextProvider;              //@synthesize row2Column2TextProvider=_row2Column2TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row3Column1TextProvider;              //@synthesize row3Column1TextProvider=_row3Column1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row3Column2TextProvider;              //@synthesize row3Column2TextProvider=_row3Column2TextProvider - In the implementation block
@property (nonatomic,copy) CLKImageProvider * row1ImageProvider;                   //@synthesize row1ImageProvider=_row1ImageProvider - In the implementation block
@property (nonatomic,copy) CLKImageProvider * row2ImageProvider;                   //@synthesize row2ImageProvider=_row2ImageProvider - In the implementation block
@property (nonatomic,copy) CLKImageProvider * row3ImageProvider;                   //@synthesize row3ImageProvider=_row3ImageProvider - In the implementation block
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
-(BOOL)useNoColumnPadding;
-(void)setUseNoColumnPadding:(BOOL)arg1 ;
-(CLKTextProvider *)row3Column1TextProvider;
-(void)setRow3Column1TextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)row3Column2TextProvider;
-(void)setRow3Column2TextProvider:(CLKTextProvider *)arg1 ;
-(CLKImageProvider *)row1ImageProvider;
-(void)setRow1ImageProvider:(CLKImageProvider *)arg1 ;
-(CLKImageProvider *)row2ImageProvider;
-(void)setRow2ImageProvider:(CLKImageProvider *)arg1 ;
-(CLKImageProvider *)row3ImageProvider;
-(void)setRow3ImageProvider:(CLKImageProvider *)arg1 ;
@end

