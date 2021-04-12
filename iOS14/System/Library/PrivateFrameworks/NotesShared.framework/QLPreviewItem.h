/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
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

