/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)setYear:(NSString *)arg1 ;
-(NSString *)year;
-(NSMutableArray *)authors;
-(NSString *)number;
-(void)setNumber:(NSString *)arg1 ;
-(NSString *)section;
-(void)setSection:(NSString *)arg1 ;
-(NSString *)sourceType;
-(void)setSourceType:(NSString *)arg1 ;
-(NSString *)volume;
-(void)setVolume:(NSString *)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)setTitles:(NSMutableArray *)arg1 ;
-(NSMutableArray *)titles;
-(WDDocument *)document;
-(NSMutableArray *)urls;
-(void)setUrls:(NSMutableArray *)arg1 ;
-(NSString *)pages;
-(void)setAuthors:(NSMutableArray *)arg1 ;
-(void)setPages:(NSString *)arg1 ;
-(NSString *)periodicalTitle;
-(void)setPeriodicalTitle:(NSString *)arg1 ;
-(NSString *)pubDate;
-(void)setPubDate:(NSString *)arg1 ;
@end

