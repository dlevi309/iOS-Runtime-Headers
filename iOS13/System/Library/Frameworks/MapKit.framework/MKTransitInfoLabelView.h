/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)stringAttributesForFont:(id)arg1 lineBreakMode:(long long)arg2 ;
+(long long)shieldSizeForContentSizeCategory:(id)arg1 ;
+(long long)iconSizeForContentSizeCategory:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setFont:(id)arg1 ;
-(void)setIconSize:(long long)arg1 ;
-(void)setMapItem:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(NSArray *)labelItems;
-(id)initWithMapItem:(id)arg1 maxWidth:(double)arg2 ;
-(id)initWithLabelItems:(id)arg1 iconSize:(long long)arg2 shieldSize:(long long)arg3 spaceBetweenShields:(double)arg4 maxWidth:(double)arg5 ;
-(void)_setFont:(id)arg1 custom:(BOOL)arg2 ;
-(void)_contentSizeCategoryDidChange;
-(void)setLabelItems:(NSArray *)arg1 ;
-(void)_setupLabelInfo;
-(id)_generateText;
-(id)_stringAttributes;
-(id)_imageForLabelItem:(id)arg1 ;
-(id)_imageForArtworkDataSource:(id)arg1 ;
-(id)_imageForShieldDataSource:(id)arg1 ;
-(MKArtworkDataSourceCache *)artworkCache;
-(long long)shieldSize;
-(void)setShieldSize:(long long)arg1 ;
-(void)setSpaceBetweenShields:(double)arg1 ;
-(void)setMaxWidth:(double)arg1 textForTruncationGenerator:(/*^block*/id)arg2 ;
-(void)setSpaceBetweenIcons:(double)arg1 ;
-(double)spaceBetweenShields;
-(void)setArtworkCache:(MKArtworkDataSourceCache *)arg1 ;
@end

