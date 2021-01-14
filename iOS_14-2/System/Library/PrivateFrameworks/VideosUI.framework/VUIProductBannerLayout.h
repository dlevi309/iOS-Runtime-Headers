/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout, VUIMediaTagsViewLayout, VUIProductUberBackgroundViewLayout;

@interface VUIProductBannerLayout : TVViewLayout {

	long long _sizeClass;
	unsigned long long _contentType;
	TVImageLayout* _logoImageLayout;
	VUITextLayout* _logoTextLayout;
	TVImageLayout* _decorationImageLayout;
	VUITextLayout* _subTextLayout;
	VUITextLayout* _episodeInfoTextLayout;
	VUITextLayout* _descriptionTextLayout;
	VUITextLayout* _descriptionTitleTextLayout;
	VUIMediaTagsViewLayout* _tagsLayout;
	VUIMediaTagsViewLayout* _infoTagsLayout;
	VUITextLayout* _promoTextLayout;
	TVImageLayout* _coverArtImageLayout;
	double _maxCoverArtImageHeight;
	VUITextLayout* _disclaimerTextLayout;
	VUITextLayout* _availabilityTextLayout;
	TVImageLayout* _availabilityImageLayout;
	VUIProductUberBackgroundViewLayout* _uberBackgroundViewLayout;

}

@property (nonatomic,retain) TVImageLayout * logoImageLayout;                                              //@synthesize logoImageLayout=_logoImageLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * logoTextLayout;                                               //@synthesize logoTextLayout=_logoTextLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * coverArtImageLayout;                                          //@synthesize coverArtImageLayout=_coverArtImageLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,readonly) TVImageLayout * decorationImageLayout;                                      //@synthesize decorationImageLayout=_decorationImageLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * subTextLayout;                                              //@synthesize subTextLayout=_subTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * episodeInfoTextLayout;                                      //@synthesize episodeInfoTextLayout=_episodeInfoTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTextLayout;                                      //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTitleTextLayout;                                 //@synthesize descriptionTitleTextLayout=_descriptionTitleTextLayout - In the implementation block
@property (nonatomic,readonly) VUIMediaTagsViewLayout * tagsLayout;                                        //@synthesize tagsLayout=_tagsLayout - In the implementation block
@property (nonatomic,readonly) VUIMediaTagsViewLayout * infoTagsLayout;                                    //@synthesize infoTagsLayout=_infoTagsLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * promoTextLayout;                                            //@synthesize promoTextLayout=_promoTextLayout - In the implementation block
@property (nonatomic,readonly) double maxCoverArtImageHeight;                                              //@synthesize maxCoverArtImageHeight=_maxCoverArtImageHeight - In the implementation block
@property (nonatomic,readonly) VUITextLayout * disclaimerTextLayout;                                       //@synthesize disclaimerTextLayout=_disclaimerTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * availabilityTextLayout;                                     //@synthesize availabilityTextLayout=_availabilityTextLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * availabilityImageLayout;                                    //@synthesize availabilityImageLayout=_availabilityImageLayout - In the implementation block
@property (nonatomic,readonly) VUIProductUberBackgroundViewLayout * uberBackgroundViewLayout;              //@synthesize uberBackgroundViewLayout=_uberBackgroundViewLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 sizeClass:(long long)arg3 contentType:(unsigned long long)arg4 ;
+(id)_coverArtImageShadow;
-(unsigned long long)contentType;
-(VUITextLayout *)descriptionTextLayout;
-(TVImageLayout *)logoImageLayout;
-(VUIMediaTagsViewLayout *)tagsLayout;
-(VUITextLayout *)availabilityTextLayout;
-(TVImageLayout *)availabilityImageLayout;
-(VUIProductUberBackgroundViewLayout *)uberBackgroundViewLayout;
-(void)setLogoImageLayout:(TVImageLayout *)arg1 ;
-(VUITextLayout *)disclaimerTextLayout;
-(void)updateWithSizeClass:(long long)arg1 contentSizeCategoryIsAccessibility:(BOOL)arg2 ;
-(TVImageLayout *)decorationImageLayout;
-(TVImageLayout *)coverArtImageLayout;
-(VUITextLayout *)descriptionTitleTextLayout;
-(VUIMediaTagsViewLayout *)infoTagsLayout;
-(VUITextLayout *)promoTextLayout;
-(VUITextLayout *)logoTextLayout;
-(VUITextLayout *)subTextLayout;
-(VUITextLayout *)episodeInfoTextLayout;
-(id)initWithSizeClass:(long long)arg1 contentType:(unsigned long long)arg2 ;
-(void)_createLayoutsWithSizeClass:(long long)arg1 contentType:(unsigned long long)arg2 ;
-(void)setLogoTextLayout:(VUITextLayout *)arg1 ;
-(void)setCoverArtImageLayout:(TVImageLayout *)arg1 ;
-(double)maxCoverArtImageHeight;
@end

