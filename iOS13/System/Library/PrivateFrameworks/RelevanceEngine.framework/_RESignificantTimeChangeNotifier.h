/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class REUpNextScheduler;

@interface _RESignificantTimeChangeNotifier : NSObject {

	REUpNextScheduler* _scheduler;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_notify;
@end
