/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

