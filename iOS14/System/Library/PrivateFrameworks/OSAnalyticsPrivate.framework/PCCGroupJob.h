/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/

#import <OSAnalyticsPrivate/PCCJob.h>

@class NSMutableArray, NSDictionary, NSString;

@interface PCCGroupJob : PCCJob {

	NSMutableArray* _log_sets;
	NSDictionary* _content;
	NSString* _group_type;
	unsigned _total_count;
	unsigned _rejected_count;
	unsigned _success_count;
	unsigned _error_count;
	unsigned _consecutive_error_count;

}
-(id)description;
-(id)type;
-(id)result;
-(id)initWithID:(id)arg1 forTarget:(id)arg2 options:(id)arg3 ;
-(void)registerResult:(BOOL)arg1 error:(id)arg2 ;
-(void)prepareNext;
@end

