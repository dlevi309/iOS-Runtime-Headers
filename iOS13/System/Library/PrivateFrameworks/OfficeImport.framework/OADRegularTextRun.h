/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADTextRun.h>

@class NSMutableString;

@interface OADRegularTextRun : OADTextRun {

	NSMutableString* mText;

}
-(id)init;
-(BOOL)isEmpty;
-(id)text;
-(unsigned long long)characterCount;
-(BOOL)isSimilarToTextRun:(id)arg1 ;
@end

