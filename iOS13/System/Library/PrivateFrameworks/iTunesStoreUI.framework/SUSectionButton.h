/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)tag;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(void)setTag:(long long)arg1 ;
-(NSURL *)imageURL;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSString *)displayTitle;
-(void)setDisplayTitle:(NSString *)arg1 ;
-(id)initWithSectionButtonDictionary:(id)arg1 ;
-(void)applyToBarButtonItem:(id)arg1 ;
-(float)imageURLScale;
-(NSString *)accessibilityTitle;
-(void)setAccessibilityTitle:(NSString *)arg1 ;
-(void)setImageURLScale:(float)arg1 ;
@end

