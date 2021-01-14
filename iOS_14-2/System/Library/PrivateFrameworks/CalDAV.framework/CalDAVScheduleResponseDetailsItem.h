/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, ICSDocument, CoreDAVErrorItem, NSString;

@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem {

	CoreDAVItemWithHrefChildItem* _recipientHREF;
	CoreDAVLeafItem* _requestStatus;
	ICSDocument* _calendarData;
	CoreDAVErrorItem* _topLevelErrorItem;
	NSString* _responseDescription;

}

@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * recipientHREF;              //@synthesize recipientHREF=_recipientHREF - In the implementation block
@property (nonatomic,readonly) NSString * recipientString; 
@property (nonatomic,retain) CoreDAVLeafItem * requestStatus;                           //@synthesize requestStatus=_requestStatus - In the implementation block
@property (nonatomic,retain) ICSDocument * calendarData;                                //@synthesize calendarData=_calendarData - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * topLevelErrorItem;                      //@synthesize topLevelErrorItem=_topLevelErrorItem - In the implementation block
@property (nonatomic,retain) NSString * responseDescription;                            //@synthesize responseDescription=_responseDescription - In the implementation block
-(CoreDAVLeafItem *)requestStatus;
-(id)description;
-(id)copyParseRules;
-(NSString *)responseDescription;
-(void)setResponseDescription:(NSString *)arg1 ;
-(CoreDAVItemWithHrefChildItem *)recipientHREF;
-(ICSDocument *)calendarData;
-(void)setCalendarData:(ICSDocument *)arg1 ;
-(void)setRecipientHREF:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(void)setRequestStatus:(CoreDAVLeafItem *)arg1 ;
-(void)_setCalendarDataWithLeafItem:(id)arg1 ;
-(void)setTopLevelErrorItem:(CoreDAVErrorItem *)arg1 ;
-(NSString *)recipientString;
-(CoreDAVErrorItem *)topLevelErrorItem;
@end

