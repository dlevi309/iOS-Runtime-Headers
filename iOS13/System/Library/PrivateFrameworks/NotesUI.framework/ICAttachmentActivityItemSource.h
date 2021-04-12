/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKit/UIActivityItemSourceAttachment.h>
#import <UIKit/UIActivityItemSource.h>

@class ICAttachment, NSString;

@interface ICAttachmentActivityItemSource : NSObject <UIActivityItemSourceAttachment, UIActivityItemSource> {

	ICAttachment* _attachment;

}

@property (assign,nonatomic,__weak) ICAttachment * attachment;                 //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,copy,readonly) NSString * attachmentTypeUTI; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ICAttachment *)attachment;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)initWithAttachment:(id)arg1 ;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
-(NSString *)attachmentTypeUTI;
@end

