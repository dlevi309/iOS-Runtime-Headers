/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@class NSString;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {

	NSString* _nextETag;

}

@property (nonatomic,retain) NSString * nextETag;                                  //@synthesize nextETag=_nextETag - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
-(id)httpMethod;
-(id)description;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(NSString *)nextETag;
-(void)setNextETag:(NSString *)arg1 ;
@end

