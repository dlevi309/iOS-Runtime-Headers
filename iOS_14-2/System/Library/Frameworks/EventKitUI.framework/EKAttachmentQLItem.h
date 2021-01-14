/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString;

@interface EKAttachmentQLItem : NSObject <QLPreviewItem> {

	NSURL* _url;
	NSString* _filename;

}

@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 filename:(id)arg2 ;
-(NSString *)previewItemTitle;
-(NSURL *)previewItemURL;
@end

