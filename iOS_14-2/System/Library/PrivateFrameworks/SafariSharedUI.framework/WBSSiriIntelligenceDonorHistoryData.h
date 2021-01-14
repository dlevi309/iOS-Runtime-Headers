/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSURL, NSString, NSDate, NSArray;

@interface WBSSiriIntelligenceDonorHistoryData : NSObject {

	NSURL* _pageURL;
	NSString* _userVisibleURLString;
	NSString* _pageTitle;
	NSString* _fullPageText;
	NSString* _readerText;
	NSDate* _lastVisitedDate;
	unsigned long long _visitCount;
	NSArray* _autocompleteTriggers;

}

@property (nonatomic,copy) NSURL * pageURL;                              //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy) NSString * userVisibleURLString;              //@synthesize userVisibleURLString=_userVisibleURLString - In the implementation block
@property (nonatomic,copy) NSString * pageTitle;                         //@synthesize pageTitle=_pageTitle - In the implementation block
@property (nonatomic,copy) NSString * fullPageText;                      //@synthesize fullPageText=_fullPageText - In the implementation block
@property (nonatomic,copy) NSString * readerText;                        //@synthesize readerText=_readerText - In the implementation block
@property (nonatomic,copy) NSDate * lastVisitedDate;                     //@synthesize lastVisitedDate=_lastVisitedDate - In the implementation block
@property (assign,nonatomic) unsigned long long visitCount;              //@synthesize visitCount=_visitCount - In the implementation block
@property (nonatomic,copy) NSArray * autocompleteTriggers;               //@synthesize autocompleteTriggers=_autocompleteTriggers - In the implementation block
-(NSURL *)pageURL;
-(NSString *)userVisibleURLString;
-(void)setPageTitle:(NSString *)arg1 ;
-(void)setPageURL:(NSURL *)arg1 ;
-(unsigned long long)visitCount;
-(NSString *)pageTitle;
-(void)setLastVisitedDate:(NSDate *)arg1 ;
-(NSArray *)autocompleteTriggers;
-(void)setAutocompleteTriggers:(NSArray *)arg1 ;
-(void)setVisitCount:(unsigned long long)arg1 ;
-(NSDate *)lastVisitedDate;
-(void)setUserVisibleURLString:(NSString *)arg1 ;
-(NSString *)fullPageText;
-(void)setFullPageText:(NSString *)arg1 ;
-(NSString *)readerText;
-(void)setReaderText:(NSString *)arg1 ;
@end

