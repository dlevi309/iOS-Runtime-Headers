/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout;

@interface VUIFavoriteViewLayout : TVViewLayout {

	long long _layoutType;
	VUITextLayout* _titleTextLayout;
	TVImageLayout* _logoImageLayout;
	TVImageLayout* _accessoryImageLayout;

}

@property (nonatomic,readonly) long long layoutType;                              //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) VUITextLayout * titleTextLayout;                   //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * logoImageLayout;                   //@synthesize logoImageLayout=_logoImageLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * accessoryImageLayout;              //@synthesize accessoryImageLayout=_accessoryImageLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)initWithType:(long long)arg1 ;
-(long long)layoutType;
-(VUITextLayout *)titleTextLayout;
-(TVImageLayout *)logoImageLayout;
-(TVImageLayout *)accessoryImageLayout;
@end

