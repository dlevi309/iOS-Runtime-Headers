/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString;

@interface CNContactPhotoPreviewItem : NSObject <QLPreviewItem> {

	NSURL* _previewItemURL;
	NSString* _previewItemTitle;

}

@property (nonatomic,retain) NSURL * previewItemURL;                   //@synthesize previewItemURL=_previewItemURL - In the implementation block
@property (nonatomic,retain) NSString * previewItemTitle;              //@synthesize previewItemTitle=_previewItemTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)previewItemTitle;
-(NSURL *)previewItemURL;
-(void)setPreviewItemURL:(NSURL *)arg1 ;
-(void)setPreviewItemTitle:(NSString *)arg1 ;
@end

