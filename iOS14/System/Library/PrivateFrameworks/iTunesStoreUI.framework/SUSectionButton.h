/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage, NSURL;

@interface SUSectionButton : NSObject <NSCopying> {

	NSString* _accessibilityTitle;
	NSString* _displayTitle;
	UIImage* _image;
	UIEdgeInsets _imageInsets;
	NSURL* _imageURL;
	float _imageURLScale;
	long long _tag;

}

@property (nonatomic,copy) NSString * accessibilityTitle;              //@synthesize accessibilityTitle=_accessibilityTitle - In the implementation block
@property (nonatomic,copy) NSString * displayTitle;                    //@synthesize displayTitle=_displayTitle - In the implementation block
@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                           //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) float imageURLScale;                      //@synthesize imageURLScale=_imageURLScale - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets;                 //@synthesize imageInsets=_imageInsets - In the implementation block
@property (assign,nonatomic) long long tag;                            //@synthesize tag=_tag - In the implementation block
-(void)setImageURL:(NSURL *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTag:(long long)arg1 ;
-(long long)tag;
-(void)setDisplayTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(NSString *)displayTitle;
-(UIEdgeInsets)imageInsets;
-(void)setAccessibilityTitle:(NSString *)arg1 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(NSURL *)imageURL;
-(NSString *)accessibilityTitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithSectionButtonDictionary:(id)arg1 ;
-(void)applyToBarButtonItem:(id)arg1 ;
-(float)imageURLScale;
-(void)setImageURLScale:(float)arg1 ;
@end

