/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@class NSString;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask {

	NSString* _previousETag;

}

@property (assign,nonatomic,__weak) id<CoreDAVMoveTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousETag;                                  //@synthesize previousETag=_previousETag - In the implementation block
-(id)additionalHeaderValues;
-(id)httpMethod;
-(id)description;
-(void)setPreviousETag:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)previousETag;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
@end

