/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@interface CoreDAVPropFindTask : CoreDAVPropertyFindBaseTask

@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
-(id)httpMethod;
-(id)requestBody;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
@end

