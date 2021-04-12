/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@interface AAUIFamilyDetailsCache : NSObject

@property (nonatomic,readonly) unsigned long long pendingInviteCount; 
+(id)sharedCache;
-(void)invalidate;
-(unsigned long long)pendingInviteCount;
@end

