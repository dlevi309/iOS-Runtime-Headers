/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <UIKitCore/UITextPosition.h>

@class PDFPage;

@interface PDFTextPosition : UITextPosition {

	PDFPage* _page;
	long long _offset;

}
-(id)description;
-(long long)offset;
-(id)page;
-(id)initWithOffset:(long long)arg1 onPage:(id)arg2 ;
@end

