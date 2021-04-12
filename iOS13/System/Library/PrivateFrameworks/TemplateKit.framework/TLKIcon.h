/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKFormattedTextItem.h>

@class TLKImage;

@interface TLKIcon : TLKFormattedTextItem {

	TLKImage* _image;

}

@property (nonatomic,retain) TLKImage * image;              //@synthesize image=_image - In the implementation block
-(TLKImage *)image;
-(void)setImage:(TLKImage *)arg1 ;
-(unsigned long long)_itemType;
@end

