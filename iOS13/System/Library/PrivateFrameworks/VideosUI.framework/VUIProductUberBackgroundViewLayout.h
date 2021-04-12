/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout;

@interface VUIProductUberBackgroundViewLayout : TVViewLayout {

	long long _sizeClass;
	TVImageLayout* _imageLayout;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) TVImageLayout * imageLayout;              //@synthesize imageLayout=_imageLayout - In the implementation block
+(double)uberImageAspectRatioForWindowWidth:(double)arg1 ;
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 sizeClass:(long long)arg3 type:(unsigned long long)arg4 ;
+(BOOL)uberImageShouldUseVerticalLayoutForWindowWidth:(double)arg1 ;
+(BOOL)uberImageShouldUsePhoneImageForSizeClass:(long long)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(TVImageLayout *)imageLayout;
-(id)initWithSizeClass:(long long)arg1 type:(unsigned long long)arg2 ;
-(void)_updateWithSizeClass:(long long)arg1 type:(unsigned long long)arg2 ;
-(void)updateWithSizeClass:(long long)arg1 ;
@end

