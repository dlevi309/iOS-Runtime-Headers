/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSString;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask {

	NSString* _previousETag;

}

@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousETag;                              //@synthesize previousETag=_previousETag - In the implementation block
-(id)additionalHeaderValues;
-(id)httpMethod;
-(id)description;
-(void)setPreviousETag:(NSString *)arg1 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(NSString *)previousETag;
@end

