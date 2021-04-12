/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLPreviewItem;
@class NSURL;

@interface QLEditedItem : NSObject {

	id<QLPreviewItem> _item;
	NSURL* _editedFileURL;

}

@property (nonatomic,copy) id<QLPreviewItem> item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSURL * editedFileURL;               //@synthesize editedFileURL=_editedFileURL - In the implementation block
-(id<QLPreviewItem>)item;
-(void)setItem:(id<QLPreviewItem>)arg1 ;
-(NSURL *)editedFileURL;
-(id)initWithItem:(id)arg1 editedFileURL:(id)arg2 ;
-(void)setEditedFileURL:(NSURL *)arg1 ;
@end

