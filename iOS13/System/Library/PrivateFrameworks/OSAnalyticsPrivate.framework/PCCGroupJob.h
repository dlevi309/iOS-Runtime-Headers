/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

