/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
*/

#import <OSAnalytics/OSAReport.h>

@class NSString;

@interface StructuredDataReport : OSAReport {

	int _log_type;
	NSString* _raw_logfile;

}
-(int)streamContentAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)appleCareDetails;
-(void)generateCustomLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)isActionable;
-(id)problemType;
-(id)initWithType:(int)arg1 withFile:(id)arg2 ;
-(id)reportNamePrefix;
-(void)dealloc;
@end

