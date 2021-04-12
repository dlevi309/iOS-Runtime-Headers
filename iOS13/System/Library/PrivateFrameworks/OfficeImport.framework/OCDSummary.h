/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface OCDSummary : NSObject {

	NSString* mTitle;
	NSString* mAuthor;
	NSString* mKeywords;
	NSString* mComments;
	NSString* mHyperlinkBase;
	NSString* _subject;
	NSString* _company;

}

@property (retain) NSString * subject;              //@synthesize subject=_subject - In the implementation block
@property (retain) NSString * company;              //@synthesize company=_company - In the implementation block
-(id)title;
-(void)setTitle:(id)arg1 ;
-(id)keywords;
-(void)setKeywords:(id)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(id)author;
-(void)setAuthor:(id)arg1 ;
-(id)comments;
-(void)setComments:(id)arg1 ;
-(NSString *)company;
-(void)setCompany:(NSString *)arg1 ;
-(id)hyperlinkBase;
-(void)setHyperlinkBase:(id)arg1 ;
@end

