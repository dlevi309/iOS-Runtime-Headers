/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, NSData, NSString;

@interface WKImage : NSObject <NSCopying, NSSecureCoding> {

	UIImage* _image;
	NSData* _imageData;
	NSString* _imageName;

}

@property (retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
@property (retain) NSData * imageData;                //@synthesize imageData=_imageData - In the implementation block
@property (retain) NSString * imageName;              //@synthesize imageName=_imageName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)imageWithImageData:(id)arg1 ;
+(id)imageWithImage:(id)arg1 ;
+(id)imageWithImageName:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
@end

