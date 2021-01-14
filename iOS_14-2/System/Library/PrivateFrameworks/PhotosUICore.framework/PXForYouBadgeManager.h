/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableForYouBadgeManager.h>

@class NSString;

@interface PXForYouBadgeManager : PXObservable <PXMutableForYouBadgeManager> {

	unsigned long long _unreadBadgeCount;

}

@property (nonatomic,readonly) unsigned long long unreadBadgeCount;              //@synthesize unreadBadgeCount=_unreadBadgeCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lastSeenBadgeDate;
+(void)setLastSeenBadgeDate:(id)arg1 ;
-(void)startListeningForChanges;
-(void)_stopListeningForChanges;
-(void)setUnreadBadgeCount:(unsigned long long)arg1 ;
-(void)_updateUnreadCount;
-(id)mutableChangeObject;
-(unsigned long long)unreadBadgeCount;
-(void)_didFinishPostingNotifications:(id)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

