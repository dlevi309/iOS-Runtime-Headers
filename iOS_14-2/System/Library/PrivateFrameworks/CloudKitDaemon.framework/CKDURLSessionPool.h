/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

