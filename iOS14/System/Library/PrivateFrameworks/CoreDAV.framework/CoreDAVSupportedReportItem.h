/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItem;

@interface CoreDAVSupportedReportItem : CoreDAVItem {

	CoreDAVItem* _report;

}

@property (nonatomic,retain) CoreDAVItem * report;              //@synthesize report=_report - In the implementation block
+(id)copyParseRules;
-(id)init;
-(CoreDAVItem *)report;
-(id)description;
-(void)setReport:(CoreDAVItem *)arg1 ;
@end

