/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, NSArray, TVImageLayout;

@interface VUIMediaTagsViewLayout : TVViewLayout {

	unsigned long long _type;
	VUITextLayout* _textLayout;
	VUITextLayout* _rentalExpirationTextLayout;
	NSArray* _groupedKeys;
	TVImageLayout* _badgeImageLayout;
	UIEdgeInsets _groupMargin;
	UIEdgeInsets _commonSenseMargin;
	UIEdgeInsets _tomatoMeterMargin;

}

@property (assign,nonatomic) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) VUITextLayout * textLayout;                              //@synthesize textLayout=_textLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * rentalExpirationTextLayout;              //@synthesize rentalExpirationTextLayout=_rentalExpirationTextLayout - In the implementation block
@property (nonatomic,readonly) NSArray * groupedKeys;                                   //@synthesize groupedKeys=_groupedKeys - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets groupMargin;                                //@synthesize groupMargin=_groupMargin - In the implementation block
@property (nonatomic,readonly) TVImageLayout * badgeImageLayout;                        //@synthesize badgeImageLayout=_badgeImageLayout - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets commonSenseMargin;                          //@synthesize commonSenseMargin=_commonSenseMargin - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets tomatoMeterMargin;                          //@synthesize tomatoMeterMargin=_tomatoMeterMargin - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(VUITextLayout *)textLayout;
-(unsigned long long)type;
-(VUITextLayout *)rentalExpirationTextLayout;
-(NSArray *)groupedKeys;
-(UIEdgeInsets)groupMargin;
-(TVImageLayout *)badgeImageLayout;
-(UIEdgeInsets)commonSenseMargin;
-(UIEdgeInsets)tomatoMeterMargin;
@end

