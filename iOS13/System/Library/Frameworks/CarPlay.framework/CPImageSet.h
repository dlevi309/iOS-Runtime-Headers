/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage;

@interface CPImageSet : NSObject <NSSecureCoding> {

	UIImage* _lightContentImage;
	UIImage* _darkContentImage;

}

@property (nonatomic,retain) UIImage * lightContentImage;              //@synthesize lightContentImage=_lightContentImage - In the implementation block
@property (nonatomic,retain) UIImage * darkContentImage;               //@synthesize darkContentImage=_darkContentImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)image;
-(id)initWithImage:(id)arg1 ;
-(UIImage *)lightContentImage;
-(UIImage *)darkContentImage;
-(id)initWithImage:(id)arg1 treatmentBlock:(/*^block*/id)arg2 ;
-(void)setDarkContentImage:(UIImage *)arg1 ;
-(void)setLightContentImage:(UIImage *)arg1 ;
-(id)initWithLightContentImage:(id)arg1 darkContentImage:(id)arg2 ;
-(void)swapStyles;
@end

