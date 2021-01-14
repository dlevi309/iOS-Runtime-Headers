/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage;

@interface QLThumbnailView : UIView {

	BOOL _alwaysVisible;
	UIImage* _image;
	long long _pageNumber;
	CGRect _unselectedFrame;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (assign) long long pageNumber;                   //@synthesize pageNumber=_pageNumber - In the implementation block
@property (assign) BOOL alwaysVisible;                     //@synthesize alwaysVisible=_alwaysVisible - In the implementation block
@property (assign) CGRect unselectedFrame;                 //@synthesize unselectedFrame=_unselectedFrame - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)image;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPageNumber:(long long)arg1 ;
-(void)setAlwaysVisible:(BOOL)arg1 ;
-(void)setUnselectedFrame:(CGRect)arg1 ;
-(BOOL)alwaysVisible;
-(CGRect)unselectedFrame;
-(long long)pageNumber;
@end

