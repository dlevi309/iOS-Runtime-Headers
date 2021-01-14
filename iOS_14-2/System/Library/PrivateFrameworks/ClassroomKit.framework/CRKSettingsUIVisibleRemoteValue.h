/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CATTaskOperationNotificationDelegate.h>

@protocol CRKRequestPerformingProtocol;
@class CATRemoteTaskOperation, NSString;

@interface CRKSettingsUIVisibleRemoteValue : NSObject <CATTaskOperationNotificationDelegate> {

	id<CRKRequestPerformingProtocol> mDaemonProxy;
	CATRemoteTaskOperation* mSubscriptionOperation;
	long long _settingsUIVisible;

}

@property (assign,nonatomic) long long settingsUIVisible;              //@synthesize settingsUIVisible=_settingsUIVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(long long)settingsUIVisible;
-(void)dealloc;
-(void)setSettingsUIVisible:(long long)arg1 ;
-(void)endUpdating;
-(void)settingsUIVisibilitySubscriptionOperationDidFinish:(id)arg1 ;
-(BOOL)isCurrentSubscriptionOperation:(id)arg1 ;
-(void)settingsUIVisibleDidChange:(BOOL)arg1 ;
-(id)initWithDaemonProxy:(id)arg1 ;
-(void)beginUpdating;
@end

