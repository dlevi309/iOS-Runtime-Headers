/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRun.h>

@class NSString;

@interface WDBookmark : WDRun {

	NSString* mName;
	int mBookmarkType;

}
-(int)bookmarkType;
-(id)name;
-(id)description;
-(void)setName:(id)arg1 ;
-(int)runType;
-(void)setBookmarkType:(int)arg1 ;
-(id)initWithParagraph:(id)arg1 name:(id)arg2 type:(int)arg3 ;
@end

