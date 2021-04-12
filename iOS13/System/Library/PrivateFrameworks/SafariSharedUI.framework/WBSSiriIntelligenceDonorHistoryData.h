/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSURL, NSString, NSDate;

@interface WBSSiriIntelligenceDonorHistoryData : NSObject {

	NSURL* _pageURL;
	NSString* _userVisibleURLString;
	NSString* _pageTitle;
	NSString* _fullPageText;
	NSString* _readerText;
	NSDate* _lastVisitedDate;
	unsigned long long _visitCount;

}

@property (nonatomic,copy) NSURL * pageURL;                              //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy) NSString * userVisibleURLString;              //@synthesize userVisibleURLString=_userVisibleURLString - In the implementation block
@property (nonatomic,copy) NSString * pageTitle;                         //@synthesize pageTitle=_pageTitle - In the implementation block
@property (nonatomic,copy) NSString * fullPageText;                      //@synthesize fullPageText=_fullPageText - In the implementation block
@property (nonatomic,copy) NSString * readerText;                        //@synthesize readerText=_readerText - In the implementation block
@property (nonatomic,copy) NSDate * lastVisitedDate;                     //@synthesize lastVisitedDate=_lastVisitedDate - In the implementation block
@property (assign,nonatomic) unsigned long long visitCount;              //@synthesize visitCount=_visitCount - In the implementation block
-(unsigned long long)visitCount;
-(void)setPageURL:(NSURL *)arg1 ;
-(NSURL *)pageURL;
-(NSString *)pageTitle;
-(void)setPageTitle:(NSString *)arg1 ;
-(void)setLastVisitedDate:(NSDate *)arg1 ;
-(NSDate *)lastVisitedDate;
-(NSString *)userVisibleURLString;
-(void)setUserVisibleURLString:(NSString *)arg1 ;
-(NSString *)fullPageText;
-(void)setFullPageText:(NSString *)arg1 ;
-(NSString *)readerText;
-(void)setReaderText:(NSString *)arg1 ;
-(void)setVisitCount:(unsigned long long)arg1 ;
@end

