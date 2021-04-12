/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADTextRun.h>

@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {

	NSString* mText;
	OADParagraphProperties* mParagraphProperties;

}
-(id)init;
-(BOOL)isEmpty;
-(id)text;
-(void)setText:(id)arg1 ;
-(unsigned long long)characterCount;
-(id)paragraphProperties;
-(void)removeUnnecessaryOverrides;
@end

