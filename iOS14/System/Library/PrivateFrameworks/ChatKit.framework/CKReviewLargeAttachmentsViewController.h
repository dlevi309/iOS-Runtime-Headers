/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAttachments:(NSArray *)arg1 ;
-(NSArray *)attachments;
-(id)tableViewCellReuseIdentifier;
-(Class)tableViewCellClass;
-(void)reloadModelData;
-(unsigned long long)numberOfModelObjects;
-(id)modelObjectAtIndex:(unsigned long long)arg1 ;
-(void)deleteModelObjectAndUnderlyingData:(id)arg1 ;
-(void)didSelectModelObjectAtIndex:(unsigned long long)arg1 ;
-(void)_populateAttachmentData;
-(id)_previewItem;
-(id)attachmentClass;
-(id)navigationBarTitle;
-(void)previewControllerDidDismiss:(id)arg1 ;
@end

