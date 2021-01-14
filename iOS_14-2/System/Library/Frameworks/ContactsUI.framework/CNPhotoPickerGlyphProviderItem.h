/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPhotoPickerProviderItem.h>

@class UIView, NSString, UIColor;

@interface CNPhotoPickerGlyphProviderItem : CNPhotoPickerProviderItem {

	unsigned long long _addItemType;
	UIView* _symbolImageView;
	NSString* _symbolImageName;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIView * symbolImageView;                    //@synthesize symbolImageView=_symbolImageView - In the implementation block
@property (nonatomic,retain) NSString * symbolImageName;                  //@synthesize symbolImageName=_symbolImageName - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                         //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) unsigned long long addItemType;              //@synthesize addItemType=_addItemType - In the implementation block
+(id)thumbnailViewForImage:(id)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(NSString *)symbolImageName;
-(void)setSymbolImageName:(NSString *)arg1 ;
-(void)thumbnailViewWithCompletion:(/*^block*/id)arg1 ;
-(void)updateTintColorIfNeeded:(id)arg1 ;
-(unsigned long long)imageType;
-(unsigned long long)addItemType;
-(UIView *)symbolImageView;
-(id)initWithSymbolImageNamed:(id)arg1 withAddItemType:(unsigned long long)arg2 ;
-(void)setupSymbolImageView;
-(id)initWithSymbolImageNamed:(id)arg1 ;
-(long long)scaleForImageNamed:(id)arg1 ;
-(id)imageForImageNamed:(id)arg1 withTintColor:(id)arg2 ;
-(void)setAddItemType:(unsigned long long)arg1 ;
-(void)setSymbolImageView:(UIView *)arg1 ;
-(UIColor *)tintColor;
-(id)backgroundColorWithTintColor:(id)arg1 ;
@end

