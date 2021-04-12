/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)styleToolbar:(id)arg1 ;
-(void)setBackgroundImage:(id)arg1 forPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)enumerateBackgroundImagesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateShadowImagesUsingBlock:(/*^block*/id)arg1 ;
-(id)backgroundImageForPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(void)setShadowImage:(id)arg1 forPosition:(long long)arg2 ;
-(id)shadowImageForPosition:(long long)arg1 ;
@end

