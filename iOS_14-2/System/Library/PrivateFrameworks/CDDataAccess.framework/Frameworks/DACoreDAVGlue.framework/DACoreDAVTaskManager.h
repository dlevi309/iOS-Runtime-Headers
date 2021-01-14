/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
*/

#import <DataAccess/DATaskManager.h>
#import <libobjc.A.dylib/CoreDAVTaskManager.h>

@class NSRunLoop, NSMutableSet, NSString;

@interface DACoreDAVTaskManager : DATaskManager <CoreDAVTaskManager> {

	NSMutableSet* _applicationsShowingActivity;

}

@property (nonatomic,retain) NSRunLoop * workRunLoop; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)submitIndependentCoreDAVTask:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)taskManagerDidAddTask:(id)arg1 ;
-(void)taskManagerWillRemoveTask:(id)arg1 ;
-(void)dealloc;
-(void)_updateSpinner:(BOOL)arg1 ;
-(void)submitQueuedCoreDAVTask:(id)arg1 ;
-(void)coreDAVTaskRequestModal:(id)arg1 ;
-(void)coreDAVTaskEndModal:(id)arg1 ;
-(void)coreDAVTaskDidFinish:(id)arg1 ;
-(NSRunLoop *)workRunLoop;
-(void)setWorkRunLoop:(NSRunLoop *)arg1 ;
@end

