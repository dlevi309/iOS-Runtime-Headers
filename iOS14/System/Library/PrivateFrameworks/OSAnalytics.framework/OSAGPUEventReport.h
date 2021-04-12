/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
*/

#import <OSAnalytics/OSAReport.h>

@class NSDictionary, NSString;

@interface OSAGPUEventReport : OSAReport {

	NSDictionary* _event;
	NSString* _tailspinPath;

}
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)appleCareDetails;
-(id)initWithDictionary:(id)arg1 ;
-(id)problemType;
-(id)reportNamePrefix;
@end

