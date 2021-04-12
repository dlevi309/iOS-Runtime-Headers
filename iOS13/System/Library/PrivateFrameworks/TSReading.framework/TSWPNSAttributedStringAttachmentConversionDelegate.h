/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSWPNSAttributedStringAttachmentConversionDelegate.h>

@protocol TSWPNSAttributedStringAttachmentConversionDelegate <NSObject>
@optional
-(id)textualEquivalentForDrawableAttachment:(id)arg1 withString:(id)arg2 atCharIndex:(unsigned long long)arg3;
-(id)attachmentStringForDrawableAttachment:(id)arg1;
-(id)urlForHyperlinkField:(id)arg1;

@end


@class NSString;

@interface TSWPNSAttributedStringAttachmentConversionDelegate : NSObject <TSWPNSAttributedStringAttachmentConversionDelegate> {

	BOOL mConvertHyperlinks;
	BOOL mConvertAttachments;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithConvertHyperlinks:(BOOL)arg1 convertGraphicalAttachments:(BOOL)arg2 ;
-(id)attachmentStringForDrawableAttachment:(id)arg1 ;
-(id)urlForHyperlinkField:(id)arg1 ;
@end

