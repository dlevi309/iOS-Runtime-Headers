/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

@class BSProcessHandle;


@protocol BSServiceConnectionContext
@property (nonatomic,readonly) BSProcessHandle * remoteProcess; 
@property (nonatomic,readonly) id<NSCopying> userInfo; 
@required
-(id<NSCopying>)userInfo;
-(BSProcessHandle *)remoteProcess;

@end

