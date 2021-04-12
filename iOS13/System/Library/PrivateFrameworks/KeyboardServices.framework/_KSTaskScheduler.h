/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@class NSMutableDictionary;

@interface _KSTaskScheduler : NSObject {

	NSMutableDictionary* _allTasks;

}

@property (nonatomic,retain) NSMutableDictionary * allTasks;              //@synthesize allTasks=_allTasks - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSMutableDictionary *)allTasks;
-(void)registerTask:(id)arg1 ;
-(void)unregisterTask:(id)arg1 ;
-(void)setAllTasks:(NSMutableDictionary *)arg1 ;
@end

