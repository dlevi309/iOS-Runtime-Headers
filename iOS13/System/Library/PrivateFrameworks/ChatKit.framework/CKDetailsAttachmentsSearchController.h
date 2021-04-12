/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKAttachmentsSearchController.h>

@class CKAttachmentSearchResultCell;

@interface CKDetailsAttachmentsSearchController : CKAttachmentsSearchController {

	CKAttachmentSearchResultCell* _sizingCell;

}

@property (nonatomic,retain) CKAttachmentSearchResultCell * sizingCell;              //@synthesize sizingCell=_sizingCell - In the implementation block
+(id)sectionIdentifier;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(CKAttachmentSearchResultCell *)sizingCell;
-(void)setSizingCell:(CKAttachmentSearchResultCell *)arg1 ;
@end

