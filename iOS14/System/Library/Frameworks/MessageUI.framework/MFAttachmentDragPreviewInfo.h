/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage;

@interface MFAttachmentDragPreviewInfo : NSObject <NSSecureCoding> {

	BOOL _isInlineImage;
	UIImage* _image;
	CGPoint _center;
	CGSize _displaySize;

}

@property (nonatomic,retain) UIImage * image;                 //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL isInlineImage;              //@synthesize isInlineImage=_isInlineImage - In the implementation block
@property (assign,nonatomic) CGPoint center;                  //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) CGSize displaySize;              //@synthesize displaySize=_displaySize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setImage:(UIImage *)arg1 ;
-(CGPoint)center;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isInlineImage;
-(void)setIsInlineImage:(BOOL)arg1 ;
-(id)targetedDragPreviewInContainer:(id)arg1 centerOffset:(CGPoint)arg2 ;
-(UIImage *)image;
-(void)setCenter:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)displaySize;
-(void)setDisplaySize:(CGSize)arg1 ;
@end

