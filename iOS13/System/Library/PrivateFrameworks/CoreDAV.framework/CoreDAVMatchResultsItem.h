/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVMatchResultsItem : CoreDAVItem {

	CoreDAVLeafItem* _rank;
	CoreDAVLeafItem* _language;
	CoreDAVLeafItem* _region;
	CoreDAVLeafItem* _calendarDescription;

}

@property (nonatomic,retain) CoreDAVLeafItem * rank;                             //@synthesize rank=_rank - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * language;                         //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * region;                           //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * calendarDescription;              //@synthesize calendarDescription=_calendarDescription - In the implementation block
+(id)copyParseRules;
-(id)description;
-(CoreDAVLeafItem *)region;
-(void)setRank:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)rank;
-(CoreDAVLeafItem *)language;
-(void)setLanguage:(CoreDAVLeafItem *)arg1 ;
-(void)setRegion:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)calendarDescription;
-(void)setCalendarDescription:(CoreDAVLeafItem *)arg1 ;
@end

