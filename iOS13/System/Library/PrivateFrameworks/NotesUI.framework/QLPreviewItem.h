/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

@class NSURL, NSString;


@protocol QLPreviewItem <NSObject>
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
@optional
-(NSString *)previewItemTitle;

@required
-(NSURL *)previewItemURL;

@end

