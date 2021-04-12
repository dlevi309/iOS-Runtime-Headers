/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString;

@interface UICreatePDFActivityItem : NSObject <QLPreviewItem> {

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

