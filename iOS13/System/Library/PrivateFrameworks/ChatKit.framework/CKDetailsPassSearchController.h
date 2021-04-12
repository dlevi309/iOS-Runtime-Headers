/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKPassSearchController.h>

@class CKPassSearchResultsCell;

@interface CKDetailsPassSearchController : CKPassSearchController {

	CKPassSearchResultsCell* _sizingCell;

}

@property (nonatomic,retain) CKPassSearchResultsCell * sizingCell;              //@synthesize sizingCell=_sizingCell - In the implementation block
+(id)sectionIdentifier;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(CKPassSearchResultsCell *)sizingCell;
-(void)setSizingCell:(CKPassSearchResultsCell *)arg1 ;
@end

