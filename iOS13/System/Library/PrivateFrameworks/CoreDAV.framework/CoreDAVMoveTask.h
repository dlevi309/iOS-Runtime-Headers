/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@class NSString;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask {

	NSString* _previousETag;

}

@property (assign,nonatomic,__weak) id<CoreDAVMoveTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousETag;                                  //@synthesize previousETag=_previousETag - In the implementation block
-(void)dealloc;
-(id)description;
-(id)httpMethod;
-(id)additionalHeaderValues;
-(void)setPreviousETag:(NSString *)arg1 ;
-(NSString *)previousETag;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
@end

