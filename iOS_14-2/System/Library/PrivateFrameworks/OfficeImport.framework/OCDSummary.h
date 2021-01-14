/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)subject;
-(id)author;
-(void)setAuthor:(id)arg1 ;
-(void)setKeywords:(id)arg1 ;
-(id)keywords;
-(id)comments;
-(void)setComments:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setCompany:(NSString *)arg1 ;
-(NSString *)company;
-(void)setSubject:(NSString *)arg1 ;
-(id)title;
-(id)hyperlinkBase;
-(void)setHyperlinkBase:(id)arg1 ;
@end

