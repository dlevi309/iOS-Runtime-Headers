/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)editedFileURL;
-(void)setItem:(id<QLPreviewItem>)arg1 ;
-(id)initWithItem:(id)arg1 editedFileURL:(id)arg2 ;
-(void)setEditedFileURL:(NSURL *)arg1 ;
@end

