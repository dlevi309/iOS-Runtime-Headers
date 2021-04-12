/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADTextRun.h>

@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {

	NSString* mText;
	OADParagraphProperties* mParagraphProperties;

}
-(unsigned long long)characterCount;
-(id)init;
-(void)setText:(id)arg1 ;
-(id)text;
-(BOOL)isEmpty;
-(id)paragraphProperties;
-(void)removeUnnecessaryOverrides;
@end

