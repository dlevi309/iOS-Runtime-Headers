/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@interface CKDURLSessionPool : NSObject {

	int _backgroundSessionConnectionPoolLimit;

}

@property (nonatomic,readonly) int backgroundSessionConnectionPoolLimit; 
+(id)sharedURLSessionPool;
+(id)backgroundSessionConnectionPoolName;
-(id)init;
-(int)backgroundSessionConnectionPoolLimit;
-(void)_updateBackgroundSessionConnectionPoolLimit;
@end

