/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <UIKitCore/UITextPosition.h>

@class PDFPage;

@interface PDFTextPosition : UITextPosition {

	PDFPage* _page;
	long long _offset;

}
-(id)page;
-(id)initWithOffset:(long long)arg1 onPage:(id)arg2 ;
-(long long)offset;
-(id)description;
@end

