/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, CLKImageProvider;

@interface CLKComplicationTemplateModularLargeStandardBody : CLKComplicationTemplate {

	BOOL _shouldTruncateHeaderLeadingLabelFirst;
	CLKTextProvider* _headerTextProvider;
	CLKTextProvider* _body1TextProvider;
	CLKTextProvider* _body2TextProvider;
	CLKImageProvider* _headerImageProvider;
	CLKImageProvider* _body1ImageProvider;
	CLKTextProvider* _headerTrailingTextProvider;

}

@property (nonatomic,copy) CLKImageProvider * body1ImageProvider;                     //@synthesize body1ImageProvider=_body1ImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * headerTrailingTextProvider;              //@synthesize headerTrailingTextProvider=_headerTrailingTextProvider - In the implementation block
@property (assign,nonatomic) BOOL shouldTruncateHeaderLeadingLabelFirst;              //@synthesize shouldTruncateHeaderLeadingLabelFirst=_shouldTruncateHeaderLeadingLabelFirst - In the implementation block
@property (nonatomic,copy) CLKTextProvider * headerTextProvider;                      //@synthesize headerTextProvider=_headerTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * body1TextProvider;                       //@synthesize body1TextProvider=_body1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * body2TextProvider;                       //@synthesize body2TextProvider=_body2TextProvider - In the implementation block
@property (nonatomic,copy) CLKImageProvider * headerImageProvider;                    //@synthesize headerImageProvider=_headerImageProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBOOLKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(CLKTextProvider *)headerTextProvider;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)body1TextProvider;
-(void)setBody1TextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)body2TextProvider;
-(void)setBody2TextProvider:(CLKTextProvider *)arg1 ;
-(CLKImageProvider *)headerImageProvider;
-(void)setHeaderImageProvider:(CLKImageProvider *)arg1 ;
-(CLKImageProvider *)body1ImageProvider;
-(void)setBody1ImageProvider:(CLKImageProvider *)arg1 ;
-(CLKTextProvider *)headerTrailingTextProvider;
-(void)setHeaderTrailingTextProvider:(CLKTextProvider *)arg1 ;
-(BOOL)shouldTruncateHeaderLeadingLabelFirst;
-(void)setShouldTruncateHeaderLeadingLabelFirst:(BOOL)arg1 ;
@end

