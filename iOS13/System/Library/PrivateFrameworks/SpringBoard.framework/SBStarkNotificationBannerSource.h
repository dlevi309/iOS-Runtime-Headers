/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBStarkBannerSource.h>
#import <libobjc.A.dylib/SBStarkNotificationBannerItemDelegate.h>

@protocol SBStarkNotificationBannerSourceDelegate;
@class NSString;

@interface SBStarkNotificationBannerSource : SBStarkBannerSource <SBStarkNotificationBannerItemDelegate> {

	id<SBStarkNotificationBannerSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBStarkNotificationBannerSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBStarkNotificationBannerSourceDelegate>)delegate;
-(void)setDelegate:(id<SBStarkNotificationBannerSourceDelegate>)arg1 ;
-(void)postNotificationRequest:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(void)modifyNotificationRequest:(id)arg1 ;
-(void)bannerViewWillAppear:(id)arg1 ;
-(void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2 ;
-(void)executeAction:(id)arg1 forNotificationRequest:(id)arg2 ;
@end

