/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/_MKUILabel.h>

@class NSArray, MKArtworkDataSourceCache;

@interface MKTransitInfoLabelView : _MKUILabel {

	long long _iconSize;
	double _maxWidth;
	double _spaceBetweenIcons;
	/*^block*/id _textForTruncationGenerator;
	BOOL _hasCustomShieldSize;
	BOOL _hasCustomIconSize;
	BOOL _hasCustomFont;
	long long _shieldSize;
	NSArray* _labelItems;
	double _spaceBetweenShields;
	MKArtworkDataSourceCache* _artworkCache;

}

@property (assign,nonatomic) long long shieldSize;                                 //@synthesize shieldSize=_shieldSize - In the implementation block
@property (nonatomic,copy) NSArray * labelItems;                                   //@synthesize labelItems=_labelItems - In the implementation block
@property (assign,nonatomic) double spaceBetweenShields;                           //@synthesize spaceBetweenShields=_spaceBetweenShields - In the implementation block
@property (nonatomic,retain) MKArtworkDataSourceCache * artworkCache;              //@synthesize artworkCache=_artworkCache - In the implementation block
+(long long)shieldSizeForContentSizeCategory:(id)arg1 ;
+(id)stringAttributesForFont:(id)arg1 lineBreakMode:(long long)arg2 ;
+(long long)iconSizeForContentSizeCategory:(id)arg1 ;
-(MKArtworkDataSourceCache *)artworkCache;
-(void)_contentSizeCategoryDidChange;
-(id)init;
-(void)setFont:(id)arg1 ;
-(long long)shieldSize;
-(id)initWithMapItem:(id)arg1 maxWidth:(double)arg2 ;
-(id)initWithLabelItems:(id)arg1 iconSize:(long long)arg2 shieldSize:(long long)arg3 spaceBetweenShields:(double)arg4 maxWidth:(double)arg5 ;
-(void)_setFont:(id)arg1 custom:(BOOL)arg2 ;
-(void)setLabelItems:(NSArray *)arg1 ;
-(void)_setupLabelInfo;
-(id)_generateText;
-(id)_stringAttributes;
-(id)_imageForLabelItem:(id)arg1 ;
-(id)_imageForArtworkDataSource:(id)arg1 ;
-(id)_imageForShieldDataSource:(id)arg1 ;
-(void)setSpaceBetweenShields:(double)arg1 ;
-(void)setMaxWidth:(double)arg1 textForTruncationGenerator:(/*^block*/id)arg2 ;
-(void)setSpaceBetweenIcons:(double)arg1 ;
-(double)spaceBetweenShields;
-(void)setShieldSize:(long long)arg1 ;
-(void)setArtworkCache:(MKArtworkDataSourceCache *)arg1 ;
-(void)setMapItem:(id)arg1 ;
-(NSArray *)labelItems;
-(void)setIconSize:(long long)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(void)dealloc;
@end

