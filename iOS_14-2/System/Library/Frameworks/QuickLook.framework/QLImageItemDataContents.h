/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLImageItemContents.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface QLImageItemDataContents : QLImageItemContents <NSSecureCoding> {

	NSData* _imageData;

}

@property (nonatomic,retain) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)imageItemContentsWithImage:(id)arg1 imageData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)imageData;
-(id)initWithCoder:(id)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
@end

