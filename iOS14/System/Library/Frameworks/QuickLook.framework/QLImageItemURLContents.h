/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLImageItemContents.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface QLImageItemURLContents : QLImageItemContents <NSSecureCoding> {

	NSURL* _imageURL;

}

@property (nonatomic,copy) NSURL * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)imageItemContentsWithImage:(id)arg1 imageURL:(id)arg2 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)imageURL;
@end

