/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSString;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask {

	NSString* _previousETag;

}

@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousETag;                              //@synthesize previousETag=_previousETag - In the implementation block
-(id)description;
-(id)httpMethod;
-(id)requestBody;
-(id)additionalHeaderValues;
-(void)setPreviousETag:(NSString *)arg1 ;
-(NSString *)previousETag;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
@end

