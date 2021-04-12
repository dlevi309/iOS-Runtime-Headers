/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout;

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

}

@property (nonatomic,readonly) VUITextLayout * titleTextLayout;                      //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * rowTextLayout;                        //@synthesize rowTextLayout=_rowTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * scoreTextLayout;                      //@synthesize scoreTextLayout=_scoreTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * losingRowTextLayout;                  //@synthesize losingRowTextLayout=_losingRowTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * losingScoreTextLayout;                //@synthesize losingScoreTextLayout=_losingScoreTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTextLayout;                //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * footerTextLayout;                     //@synthesize footerTextLayout=_footerTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * availabilityTextLayout;               //@synthesize availabilityTextLayout=_availabilityTextLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * availabilityImageLayout;              //@synthesize availabilityImageLayout=_availabilityImageLayout - In the implementation block
+(BOOL)shouldUseVerticalLayout;
+(BOOL)shouldDisplayScoresBelowLabels;
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 sizeClass:(long long)arg3 ;
-(id)init;
-(id)initWithSizeClass:(long long)arg1 ;
-(VUITextLayout *)titleTextLayout;
-(VUITextLayout *)descriptionTextLayout;
-(VUITextLayout *)rowTextLayout;
-(VUITextLayout *)losingRowTextLayout;
-(VUITextLayout *)footerTextLayout;
-(VUITextLayout *)scoreTextLayout;
-(VUITextLayout *)losingScoreTextLayout;
-(VUITextLayout *)availabilityTextLayout;
-(TVImageLayout *)availabilityImageLayout;
@end

