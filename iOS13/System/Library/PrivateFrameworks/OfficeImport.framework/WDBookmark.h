/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRun.h>

@class NSString;

@interface WDBookmark : WDRun {

	NSString* mName;
	int mBookmarkType;

}
-(id)description;
-(id)name;
-(void)setName:(id)arg1 ;
-(int)bookmarkType;
-(int)runType;
-(void)setBookmarkType:(int)arg1 ;
-(id)initWithParagraph:(id)arg1 name:(id)arg2 type:(int)arg3 ;
@end

