/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKit/UIActivityItemSourceAttachment.h>
#import <UIKit/UIActivityItemSource.h>

@class NSString;

@interface ICFilterAttachmentActivityItemSource : NSObject <UIActivityItemSourceAttachment, UIActivityItemSource> {

	id _attachmentItem;

}

@property (nonatomic,retain) id attachmentItem;                     //@synthesize attachmentItem=_attachmentItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
-(id)attachmentItem;
-(void)setAttachmentItem:(id)arg1 ;
-(id)initAttachmentItem:(id)arg1 ;
-(id)activityItemSourceForSelector:(SEL)arg1 ;
@end

