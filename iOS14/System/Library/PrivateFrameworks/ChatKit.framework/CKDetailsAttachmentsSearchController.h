/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKAttachmentsSearchController.h>

@class CKAttachmentSearchResultCell;

@interface CKDetailsAttachmentsSearchController : CKAttachmentsSearchController {

	CKAttachmentSearchResultCell* _sizingCell;

}

@property (nonatomic,retain) CKAttachmentSearchResultCell * sizingCell;              //@synthesize sizingCell=_sizingCell - In the implementation block
+(id)sectionIdentifier;
-(CKAttachmentSearchResultCell *)sizingCell;
-(void)setSizingCell:(CKAttachmentSearchResultCell *)arg1 ;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
@end

