/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

