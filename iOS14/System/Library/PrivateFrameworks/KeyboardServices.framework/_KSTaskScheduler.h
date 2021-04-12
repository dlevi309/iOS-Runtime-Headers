/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@class NSMutableDictionary;

@interface _KSTaskScheduler : NSObject {

	NSMutableDictionary* _allTasks;

}

@property (nonatomic,retain) NSMutableDictionary * allTasks;              //@synthesize allTasks=_allTasks - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setAllTasks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)allTasks;
-(void)unregisterTask:(id)arg1 ;
-(void)registerTask:(id)arg1 ;
@end

