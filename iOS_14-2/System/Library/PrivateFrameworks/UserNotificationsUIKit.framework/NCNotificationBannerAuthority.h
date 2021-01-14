/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <libobjc.A.dylib/BNConsidering.h>

@class NSString;

@interface NCNotificationBannerAuthority : NSObject <BNConsidering>

@property (assign,nonatomic,__weak) id<BNConsideringDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requesterIdentifier;
-(long long)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2 ;
-(long long)shouldPresentPresentable:(id)arg1 withPresentedPresentables:(id)arg2 responsiblePresentable:(out id*)arg3 ;
@end

