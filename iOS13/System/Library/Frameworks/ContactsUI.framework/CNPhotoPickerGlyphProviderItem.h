/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPhotoPickerProviderItem.h>

@class UIView, NSString, UIColor;

@interface CNPhotoPickerGlyphProviderItem : CNPhotoPickerProviderItem {

	UIView* _symbolImageView;
	NSString* _symbolImageName;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIView * symbolImageView;                //@synthesize symbolImageView=_symbolImageView - In the implementation block
@property (nonatomic,retain) NSString * symbolImageName;              //@synthesize symbolImageName=_symbolImageName - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                     //@synthesize tintColor=_tintColor - In the implementation block
+(id)thumbnailViewForImage:(id)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)backgroundColorWithTintColor:(id)arg1 ;
-(unsigned long long)imageType;
-(void)thumbnailViewWithCompletion:(/*^block*/id)arg1 ;
-(void)updateTintColorIfNeeded:(id)arg1 ;
-(NSString *)symbolImageName;
-(void)setSymbolImageName:(NSString *)arg1 ;
-(id)initWithSymbolImageNamed:(id)arg1 ;
-(long long)scaleForImageNamed:(id)arg1 ;
-(id)imageForImageNamed:(id)arg1 withTintColor:(id)arg2 ;
-(UIView *)symbolImageView;
-(void)setSymbolImageView:(UIView *)arg1 ;
@end

