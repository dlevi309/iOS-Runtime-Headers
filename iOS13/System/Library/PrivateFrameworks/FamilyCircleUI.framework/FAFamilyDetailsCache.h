/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@interface FAFamilyDetailsCache : NSObject {

	unsigned long long _pendingInviteCount;
	BOOL _isValid;
	BOOL _isValidating;

}

@property (nonatomic,readonly) unsigned long long pendingInviteCount; 
+(id)sharedCache;
-(void)invalidate;
-(unsigned long long)pendingInviteCount;
-(void)_fetchPendingInviteCount;
-(void)_setPendingInviteCount:(unsigned long long)arg1 ;
@end

