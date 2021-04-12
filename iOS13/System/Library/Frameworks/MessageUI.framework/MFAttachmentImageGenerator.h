/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIImage;

@interface MFAttachmentImageGenerator : UIView {

	CGSize _textSize;
	NSString* _displayString;
	UIImage* _image;
	double _maxImageHeight;

}
+(double)defaultHeight;
+(id)pngDataForAttachment:(id)arg1 ;
+(id)imageForAttachment:(id)arg1 ;
+(CGRect)imageRectForAttachment:(id)arg1 ;
-(id)image;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(CGRect)imageRect;
-(id)pngData;
@end

