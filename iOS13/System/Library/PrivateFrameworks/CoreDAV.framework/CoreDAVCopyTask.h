/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask

@property (assign,nonatomic,__weak) id<CoreDAVCopyTaskDelegate> delegate; 
-(void)dealloc;
-(BOOL)validate:(id*)arg1 ;
-(id)httpMethod;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
@end

