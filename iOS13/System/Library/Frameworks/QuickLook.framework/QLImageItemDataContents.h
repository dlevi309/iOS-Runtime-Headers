/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
@end

