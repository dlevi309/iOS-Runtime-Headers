/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OCPPackageProperties : NSObject {

	NSString* mCreator;
	NSString* mDescription;
	NSString* mKeywords;
	NSString* mTitle;
	NSString* mAppVersion;
	NSString* mSubject;
	NSString* mCompany;

}

@property (retain) NSString * subject; 
@property (retain) NSString * company; 
-(id)description;
-(id)title;
-(id)keywords;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(id)creator;
-(id)appVersion;
-(NSString *)company;
-(void)setCompany:(NSString *)arg1 ;
-(id)initWithCoreXml:(xmlDoc*)arg1 appXml:(xmlDoc*)arg2 ;
-(void)readFromCoreXml:(xmlDoc*)arg1 appXml:(xmlDoc*)arg2 ;
-(void)readFromCoreXml:(xmlDoc*)arg1 ;
-(void)readFromAppXml:(xmlDoc*)arg1 ;
@end

