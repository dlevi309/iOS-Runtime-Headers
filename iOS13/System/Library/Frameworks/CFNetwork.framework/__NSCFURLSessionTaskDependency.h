/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/NSURLSessionTaskDependency.h>

@class NSURLSessionTaskDependencyDescription, NSURLSessionTask;

@interface __NSCFURLSessionTaskDependency : NSURLSessionTaskDependency {

	NSURLSessionTaskDependencyDescription* _taskDependencyDescription;
	NSURLSessionTask* _parentTask;
	NSURLSessionTask* _mainDocumentTask;

}
+(id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(BOOL)arg3 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg1 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)taskDependencyDescription;
-(void)setTaskDependencyDescription:(id)arg1 ;
-(id)parentTask;
-(id)mainDocumentTask;
@end

