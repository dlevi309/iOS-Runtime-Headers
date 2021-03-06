/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateModularLargeTable : CLKComplicationTemplate {

	BOOL _useNoColumnPadding;
	CLKImageProvider* _headerImageProvider;
	CLKTextProvider* _headerTextProvider;
	CLKTextProvider* _row1Column1TextProvider;
	CLKTextProvider* _row1Column2TextProvider;
	CLKTextProvider* _row2Column1TextProvider;
	CLKTextProvider* _row2Column2TextProvider;
	long long _column2Alignment;

}

@property (assign,nonatomic) BOOL useNoColumnPadding;                              //@synthesize useNoColumnPadding=_useNoColumnPadding - In the implementation block
@property (nonatomic,copy) CLKImageProvider * headerImageProvider;                 //@synthesize headerImageProvider=_headerImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * headerTextProvider;                   //@synthesize headerTextProvider=_headerTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row1Column1TextProvider;              //@synthesize row1Column1TextProvider=_row1Column1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row1Column2TextProvider;              //@synthesize row1Column2TextProvider=_row1Column2TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row2Column1TextProvider;              //@synthesize row2Column1TextProvider=_row2Column1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * row2Column2TextProvider;              //@synthesize row2Column2TextProvider=_row2Column2TextProvider - In the implementation block
@property (assign,nonatomic) long long column2Alignment;                           //@synthesize column2Alignment=_column2Alignment - In the implementation block
+(id)templateWithHeaderTextProvider:(id)arg1 row1Column1TextProvider:(id)arg2 row1Column2TextProvider:(id)arg3 row2Column1TextProvider:(id)arg4 row2Column2TextProvider:(id)arg5 ;
+(id)templateWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 row1Column1TextProvider:(id)arg3 row1Column2TextProvider:(id)arg4 row2Column1TextProvider:(id)arg5 row2Column2TextProvider:(id)arg6 ;
-(CLKTextProvider *)headerTextProvider;
-(CLKImageProvider *)headerImageProvider;
-(void)setHeaderImageProvider:(CLKImageProvider *)arg1 ;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(BOOL)useNoColumnPadding;
-(void)setUseNoColumnPadding:(BOOL)arg1 ;
-(long long)column2Alignment;
-(CLKTextProvider *)row1Column1TextProvider;
-(CLKTextProvider *)row1Column2TextProvider;
-(CLKTextProvider *)row2Column1TextProvider;
-(CLKTextProvider *)row2Column2TextProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setRow1Column1TextProvider:(CLKTextProvider *)arg1 ;
-(void)setRow1Column2TextProvider:(CLKTextProvider *)arg1 ;
-(void)setRow2Column1TextProvider:(CLKTextProvider *)arg1 ;
-(void)setRow2Column2TextProvider:(CLKTextProvider *)arg1 ;
-(void)setColumn2Alignment:(long long)arg1 ;
-(id)initWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 row1Column1TextProvider:(id)arg3 row1Column2TextProvider:(id)arg4 row2Column1TextProvider:(id)arg5 row2Column2TextProvider:(id)arg6 ;
-(id)initWithHeaderTextProvider:(id)arg1 row1Column1TextProvider:(id)arg2 row1Column2TextProvider:(id)arg3 row2Column1TextProvider:(id)arg4 row2Column2TextProvider:(id)arg5 ;
@end

