/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(BOOL)isInlineImage;
-(CGSize)displaySize;
-(void)setIsInlineImage:(BOOL)arg1 ;
-(void)setDisplaySize:(CGSize)arg1 ;
-(id)targetedDragPreviewInContainer:(id)arg1 centerOffset:(CGPoint)arg2 ;
@end

