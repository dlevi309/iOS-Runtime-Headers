/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, UIColor;

@interface SUToolbarAppearance : NSObject <NSCopying> {

	NSMutableDictionary* _backgroundImages;
	NSMutableDictionary* _shadowImages;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
+(id)defaultToolbarAppearance;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(void)dealloc;
-(void)styleToolbar:(id)arg1 ;
-(void)setBackgroundImage:(id)arg1 forPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)enumerateBackgroundImagesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateShadowImagesUsingBlock:(/*^block*/id)arg1 ;
-(id)backgroundImageForPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(void)setShadowImage:(id)arg1 forPosition:(long long)arg2 ;
-(id)shadowImageForPosition:(long long)arg1 ;
@end

