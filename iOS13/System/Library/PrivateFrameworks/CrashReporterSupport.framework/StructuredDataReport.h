/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
*/

#import <OSAnalytics/OSAReport.h>

@class NSString;

@interface StructuredDataReport : OSAReport {

	int _log_type;
	NSString* _raw_logfile;

}
-(void)dealloc;
-(id)problemType;
-(void)generateCustomLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithType:(int)arg1 withFile:(id)arg2 ;
-(BOOL)isActionable;
-(id)appleCareDetails;
-(id)reportNamePrefix;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(int)streamContentAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
@end

