/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)subject;
-(id)appVersion;
-(id)keywords;
-(id)creator;
-(void)setCompany:(NSString *)arg1 ;
-(NSString *)company;
-(id)description;
-(void)setSubject:(NSString *)arg1 ;
-(id)title;
-(id)initWithCoreXml:(xmlDoc*)arg1 appXml:(xmlDoc*)arg2 ;
-(void)readFromCoreXml:(xmlDoc*)arg1 appXml:(xmlDoc*)arg2 ;
-(void)readFromCoreXml:(xmlDoc*)arg1 ;
-(void)readFromAppXml:(xmlDoc*)arg1 ;
@end

