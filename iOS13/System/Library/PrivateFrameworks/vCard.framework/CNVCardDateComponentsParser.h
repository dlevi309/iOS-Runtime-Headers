/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@class CNVCardDateComponentsFormatter, NSCalendar;

@interface CNVCardDateComponentsParser : NSObject {

	CNVCardDateComponentsFormatter* _formatter;
	NSCalendar* _gregorianCalendar;

}
-(id)init;
-(id)gregorianDateComponentsWithParser:(id)arg1 ;
-(id)dateComponentsWithParser:(id)arg1 ;
-(id)dateComponentsFromString:(id)arg1 omitYear:(long long)arg2 ;
-(id)dateComponentsFromString:(id)arg1 calendarIdentifier:(id)arg2 ;
@end

