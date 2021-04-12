/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWSetupManager.h>

@protocol SWSetupManager <NSObject>
@required
-(void)addTask:(id)arg1;
-(void)performTasks;

@end


@protocol SWLogger;
@class NSMutableOrderedSet, NSString;

@interface SWSetupManager : NSObject <SWSetupManager> {

	id<SWLogger> _logger;
	NSMutableOrderedSet* _tasks;

}

@property (nonatomic,readonly) id<SWLogger> logger;                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * tasks;              //@synthesize tasks=_tasks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SWLogger>)logger;
-(void)addTask:(id)arg1 ;
-(NSMutableOrderedSet *)tasks;
-(id)initWithLogger:(id)arg1 ;
-(void)performTasks;
@end

