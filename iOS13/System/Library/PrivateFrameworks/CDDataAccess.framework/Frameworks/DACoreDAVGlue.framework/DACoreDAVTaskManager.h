/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
*/

#import <DataAccess/DATaskManager.h>
#import <libobjc.A.dylib/CoreDAVTaskManager.h>

@class NSRunLoop, NSMutableSet, NSString;

@interface DACoreDAVTaskManager : DATaskManager <CoreDAVTaskManager> {

	NSMutableSet* _applicationsShowingActivity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSRunLoop * workRunLoop; 
-(void)dealloc;
-(id)initWithAccount:(id)arg1 ;
-(void)taskManagerDidAddTask:(id)arg1 ;
-(void)taskManagerWillRemoveTask:(id)arg1 ;
-(void)submitIndependentCoreDAVTask:(id)arg1 ;
-(void)submitQueuedCoreDAVTask:(id)arg1 ;
-(void)_updateSpinner:(BOOL)arg1 ;
-(void)coreDAVTaskRequestModal:(id)arg1 ;
-(void)coreDAVTaskEndModal:(id)arg1 ;
-(void)coreDAVTaskDidFinish:(id)arg1 ;
-(NSRunLoop *)workRunLoop;
-(void)setWorkRunLoop:(NSRunLoop *)arg1 ;
@end

