/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAbstractReviewViewController.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>

@class NSArray, NSString;

@interface CKReviewLargeAttachmentsViewController : CKAbstractReviewViewController <QLPreviewControllerDelegate> {

	NSArray* _attachments;

}

@property (nonatomic,retain) NSArray * attachments;                 //@synthesize attachments=_attachments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(id)attachmentClass;
-(id)navigationBarTitle;
-(id)tableViewCellReuseIdentifier;
-(Class)tableViewCellClass;
-(void)reloadModelData;
-(unsigned long long)numberOfModelObjects;
-(id)modelObjectAtIndex:(unsigned long long)arg1 ;
-(void)deleteModelObjectAndUnderlyingData:(id)arg1 ;
-(void)didSelectModelObjectAtIndex:(unsigned long long)arg1 ;
-(void)_populateAttachmentData;
-(id)_previewItem;
@end

