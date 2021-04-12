/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKPassSearchController.h>

@class CKPassSearchResultsCell;

@interface CKDetailsPassSearchController : CKPassSearchController {

	CKPassSearchResultsCell* _sizingCell;

}

@property (nonatomic,retain) CKPassSearchResultsCell * sizingCell;              //@synthesize sizingCell=_sizingCell - In the implementation block
+(id)sectionIdentifier;
-(CKPassSearchResultsCell *)sizingCell;
-(void)setSizingCell:(CKPassSearchResultsCell *)arg1 ;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
@end

