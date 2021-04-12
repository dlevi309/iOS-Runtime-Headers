/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

@class BSProcessHandle;


@protocol BSServiceConnectionContext
@property (nonatomic,readonly) BSProcessHandle * remoteProcess; 
@property (nonatomic,readonly) id<NSCopying> userInfo; 
@required
-(BSProcessHandle *)remoteProcess;
-(id<NSCopying>)userInfo;

@end

