/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSMutableArray, WDDocument;

@interface WDCitation : NSObject {

	NSString* mSourceType;
	NSMutableArray* mAuthors;
	NSString* mYear;
	NSMutableArray* mTitles;
	NSMutableArray* mUrls;
	NSString* mPeriodicalTitle;
	NSString* mVolume;
	NSString* mNumber;
	NSString* mSection;
	NSString* mPubDate;
	NSString* mPages;
	WDDocument* mDocument;

}

@property (nonatomic,retain) NSString * year; 
@property (nonatomic,retain) NSMutableArray * authors; 
@property (nonatomic,retain) NSString * sourceType; 
@property (nonatomic,retain) NSMutableArray * titles; 
@property (nonatomic,retain) NSString * periodicalTitle; 
@property (nonatomic,retain) NSString * volume; 
@property (nonatomic,retain) NSString * number; 
@property (nonatomic,retain) NSString * section; 
@property (nonatomic,retain) NSString * pubDate; 
@property (nonatomic,retain) NSMutableArray * urls; 
@property (nonatomic,retain) NSString * pages; 
@property (__weak,readonly) WDDocument * document; 
+(id)refTypeEnumMap;
+(id)wordRefTypeEnumMap;
+(xmlNode*)nodeAtPath:(id)arg1 nodePtr:(xmlNode*)arg2 ;
+(xmlNode*)trimStyle:(xmlNode*)arg1 ;
+(id)endNoteStringForRefType:(int)arg1 ;
+(int)refTypeForWordString:(id)arg1 ;
+(id)wordStringForRefType:(int)arg1 ;
+(id)subStringOf:(xmlNode*)arg1 forPath:(id)arg2 ;
+(id)stringValueForNodeAtPath:(id)arg1 nodePtr:(xmlNode*)arg2 trimStyle:(BOOL)arg3 ;
+(id)stringValuesForNodesAtPath:(id)arg1 nodePtr:(xmlNode*)arg2 trimStyle:(BOOL)arg3 ;
-(void)setNumber:(NSString *)arg1 ;
-(void)setYear:(NSString *)arg1 ;
-(NSMutableArray *)urls;
-(NSString *)year;
-(void)setSection:(NSString *)arg1 ;
-(NSString *)sourceType;
-(NSString *)number;
-(void)setVolume:(NSString *)arg1 ;
-(NSString *)pages;
-(void)setUrls:(NSMutableArray *)arg1 ;
-(NSString *)section;
-(NSMutableArray *)authors;
-(void)setTitles:(NSMutableArray *)arg1 ;
-(void)setSourceType:(NSString *)arg1 ;
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(NSMutableArray *)titles;
-(void)setPages:(NSString *)arg1 ;
-(NSString *)pubDate;
-(WDDocument *)document;
-(void)setAuthors:(NSMutableArray *)arg1 ;
-(NSString *)volume;
-(void)setPubDate:(NSString *)arg1 ;
-(NSString *)periodicalTitle;
-(void)setPeriodicalTitle:(NSString *)arg1 ;
@end

