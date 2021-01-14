/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem {

	NSMutableSet* _supportedReports;

}

@property (nonatomic,retain) NSMutableSet * supportedReports;              //@synthesize supportedReports=_supportedReports - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(NSMutableSet *)supportedReports;
-(BOOL)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)addSupportedReport:(id)arg1 ;
-(void)setSupportedReports:(NSMutableSet *)arg1 ;
@end

