/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, NSDictionary, NSDate;

@interface CLKComplicationTemplateModularLargeTallBody : CLKComplicationTemplate {

	BOOL _shouldTruncateHeaderLeadingLabelFirst;
	CLKTextProvider* _headerTextProvider;
	CLKTextProvider* _bodyTextProvider;
	CLKTextProvider* _headerTrailingTextProvider;
	NSDictionary* _additionalContentAttributes;

}

@property (nonatomic,copy) CLKTextProvider * headerTrailingTextProvider;              //@synthesize headerTrailingTextProvider=_headerTrailingTextProvider - In the implementation block
@property (nonatomic,copy) NSDate * contentDate; 
@property (assign,nonatomic) BOOL shouldTruncateHeaderLeadingLabelFirst;              //@synthesize shouldTruncateHeaderLeadingLabelFirst=_shouldTruncateHeaderLeadingLabelFirst - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalContentAttributes;                //@synthesize additionalContentAttributes=_additionalContentAttributes - In the implementation block
@property (nonatomic,copy) CLKTextProvider * headerTextProvider;                      //@synthesize headerTextProvider=_headerTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * bodyTextProvider;                        //@synthesize bodyTextProvider=_bodyTextProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBOOLKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateDateKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(CLKTextProvider *)headerTextProvider;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)headerTrailingTextProvider;
-(void)setHeaderTrailingTextProvider:(CLKTextProvider *)arg1 ;
-(BOOL)shouldTruncateHeaderLeadingLabelFirst;
-(void)setShouldTruncateHeaderLeadingLabelFirst:(BOOL)arg1 ;
-(NSDictionary *)additionalContentAttributes;
-(void)setAdditionalContentAttributes:(NSDictionary *)arg1 ;
-(NSDate *)contentDate;
-(void)setContentDate:(NSDate *)arg1 ;
-(CLKTextProvider *)bodyTextProvider;
-(void)setBodyTextProvider:(CLKTextProvider *)arg1 ;
@end

