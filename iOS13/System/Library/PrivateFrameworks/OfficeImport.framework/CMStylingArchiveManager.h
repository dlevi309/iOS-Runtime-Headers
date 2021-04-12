/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMArchiveManager.h>

@class NSMutableString, NSMutableDictionary;

@interface CMStylingArchiveManager : CMArchiveManager {

	NSMutableString* mCssString;
	NSMutableDictionary* mStyleCache;

}
-(id)init;
-(id)addCssStyle:(id)arg1 ;
-(void)addCssStyle:(id)arg1 withName:(id)arg2 ;
-(id)cssStylesheetString;
-(id)commitStylesheet;
@end

