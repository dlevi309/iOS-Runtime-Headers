/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)imageURL;
-(void)setImageURL:(NSURL *)arg1 ;
@end

