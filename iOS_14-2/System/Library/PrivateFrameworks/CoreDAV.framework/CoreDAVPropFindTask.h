/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@interface CoreDAVPropFindTask : CoreDAVPropertyFindBaseTask

@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 ;
@end

