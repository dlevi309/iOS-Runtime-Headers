/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout, VUIProductUberBackgroundViewLayout;

@interface VUISportsProductBannerLayout : TVViewLayout {

	VUITextLayout* _titleTextLayout;
	VUITextLayout* _rowTextLayout;
	VUITextLayout* _scoreTextLayout;
	VUITextLayout* _losingRowTextLayout;
	VUITextLayout* _losingScoreTextLayout;
	VUITextLayout* _descriptionTextLayout;
	VUITextLayout* _footerTextLayout;
	VUITextLayout* _availabilityTextLayout;
	TVImageLayout* _availabilityImageLayout;
	VUIProductUberBackgroundViewLayout* _uberBackgroundViewLayout;

}

@property (nonatomic,readonly) VUITextLayout * titleTextLayout;                                            //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * rowTextLayout;                                              //@synthesize rowTextLayout=_rowTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * scoreTextLayout;                                            //@synthesize scoreTextLayout=_scoreTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * losingRowTextLayout;                                        //@synthesize losingRowTextLayout=_losingRowTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * losingScoreTextLayout;                                      //@synthesize losingScoreTextLayout=_losingScoreTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTextLayout;                                      //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * footerTextLayout;                                           //@synthesize footerTextLayout=_footerTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * availabilityTextLayout;                                     //@synthesize availabilityTextLayout=_availabilityTextLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * availabilityImageLayout;                                    //@synthesize availabilityImageLayout=_availabilityImageLayout - In the implementation block
@property (nonatomic,readonly) VUIProductUberBackgroundViewLayout * uberBackgroundViewLayout;              //@synthesize uberBackgroundViewLayout=_uberBackgroundViewLayout - In the implementation block
+(BOOL)shouldUseVerticalLayout;
+(BOOL)shouldDisplayScoresBelowLabels;
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 sizeClass:(long long)arg3 ;
-(id)init;
-(VUITextLayout *)titleTextLayout;
-(VUITextLayout *)descriptionTextLayout;
-(id)initWithSizeClass:(long long)arg1 ;
-(VUITextLayout *)rowTextLayout;
-(VUITextLayout *)losingRowTextLayout;
-(VUITextLayout *)footerTextLayout;
-(VUITextLayout *)scoreTextLayout;
-(VUITextLayout *)losingScoreTextLayout;
-(VUITextLayout *)availabilityTextLayout;
-(TVImageLayout *)availabilityImageLayout;
-(VUIProductUberBackgroundViewLayout *)uberBackgroundViewLayout;
@end

