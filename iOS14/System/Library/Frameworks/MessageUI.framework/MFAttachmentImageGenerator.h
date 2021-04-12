/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)pngData;
-(id)image;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(CGRect)imageRect;
@end

