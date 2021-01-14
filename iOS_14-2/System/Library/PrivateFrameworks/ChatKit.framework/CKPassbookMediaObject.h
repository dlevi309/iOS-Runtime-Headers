/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMediaObject.h>

@class PKPass, UIImage;

@interface CKPassbookMediaObject : CKMediaObject {

	PKPass* _pass;
	UIImage* _icon;

}

@property (nonatomic,retain) PKPass * pass;               //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) UIImage * icon;              //@synthesize icon=_icon - In the implementation block
+(id)fallbackFilenamePrefix;
+(BOOL)isPreviewable;
+(id)UTITypes;
-(Class)balloonViewClassForWidth:(double)arg1 orientation:(char)arg2 ;
-(int)mediaType;
-(id)passView;
-(void)setPass:(PKPass *)arg1 ;
-(BOOL)_supportsPassbook;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(UIImage *)icon;
-(id)subtitle;
-(void)setIcon:(UIImage *)arg1 ;
-(BOOL)shouldShowViewer;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)metricsCollectorMediaType;
-(id)initWithTransfer:(id)arg1 isFromMe:(BOOL)arg2 suppressPreview:(BOOL)arg3 forceInlinePreview:(BOOL)arg4 ;
-(PKPass *)pass;
-(BOOL)shouldBeQuickLooked;
-(id)previewItemTitle;
-(id)attachmentSummary:(unsigned long long)arg1 ;
-(BOOL)shouldShowDisclosure;
-(id)title;
@end

