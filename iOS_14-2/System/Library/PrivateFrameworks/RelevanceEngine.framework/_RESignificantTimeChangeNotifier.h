/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class REUpNextScheduler;

@interface _RESignificantTimeChangeNotifier : NSObject {

	REUpNextScheduler* _scheduler;

}
+(id)sharedInstance;
-(id)init;
-(void)_notify;
-(void)dealloc;
@end

