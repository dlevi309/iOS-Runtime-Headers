/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
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
+(id)templateWithHeaderTextProvider:(id)arg1 bodyTextProvider:(id)arg2 ;
-(void)setContentDate:(NSDate *)arg1 ;
-(NSDate *)contentDate;
-(CLKTextProvider *)headerTextProvider;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)bodyTextProvider;
-(CLKTextProvider *)headerTrailingTextProvider;
-(BOOL)shouldTruncateHeaderLeadingLabelFirst;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)_enumerateBOOLKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateDateKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setHeaderTrailingTextProvider:(CLKTextProvider *)arg1 ;
-(void)setShouldTruncateHeaderLeadingLabelFirst:(BOOL)arg1 ;
-(void)setBodyTextProvider:(CLKTextProvider *)arg1 ;
-(id)initWithHeaderTextProvider:(id)arg1 bodyTextProvider:(id)arg2 ;
-(NSDictionary *)additionalContentAttributes;
-(void)setAdditionalContentAttributes:(NSDictionary *)arg1 ;
@end

