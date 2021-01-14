/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage;

@interface QLImageItemContents : NSObject <NSSecureCoding> {

	UIImage* _image;

}

@property (nonatomic,copy) UIImage * image;              //@synthesize image=_image - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)image;
-(id)initWithCoder:(id)arg1 ;
@end

