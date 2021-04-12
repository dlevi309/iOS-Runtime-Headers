/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSSiteMetadataResponse.h>

@class UIImage, UIColor;

@interface WBSTemplateIconResponse : WBSSiteMetadataResponse {

	BOOL _monogram;
	UIImage* _image;
	UIImage* _highlightedImage;
	UIColor* _themeColor;

}

@property (nonatomic,readonly) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIImage * highlightedImage;                   //@synthesize highlightedImage=_highlightedImage - In the implementation block
@property (nonatomic,readonly) UIColor * themeColor;                         //@synthesize themeColor=_themeColor - In the implementation block
@property (getter=isMonogram,nonatomic,readonly) BOOL monogram;              //@synthesize monogram=_monogram - In the implementation block
+(id)responseWithURL:(id)arg1 image:(id)arg2 highlightedImage:(id)arg3 themeColor:(id)arg4 isMonogram:(BOOL)arg5 ;
-(id)initWithURL:(id)arg1 ;
-(UIImage *)image;
-(UIColor *)themeColor;
-(BOOL)isMonogram;
-(UIImage *)highlightedImage;
-(id)initWithURL:(id)arg1 image:(id)arg2 highlightedImage:(id)arg3 themeColor:(id)arg4 isMonogram:(BOOL)arg5 ;
@end

