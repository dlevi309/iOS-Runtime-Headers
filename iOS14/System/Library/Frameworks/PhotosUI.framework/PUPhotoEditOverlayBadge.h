/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@interface PUPhotoEditOverlayBadge : UIView {

	NSString* _text;
	UILabel* _label;
	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) UILabel * label;                  //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets insets;              //@synthesize insets=_insets - In the implementation block
@property (nonatomic,copy) NSString * text;                      //@synthesize text=_text - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateLabel;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(UIEdgeInsets)insets;
-(UILabel *)label;
@end

