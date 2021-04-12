/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBPresentationObservationToken.h>
#import <libobjc.A.dylib/SBNotificationBannerDestinationObserver.h>

@class SBNotificationBannerDestination, NSString;

@interface SBNotificationLongLookBannerPresentationObservationToken : SBPresentationObservationToken <SBNotificationBannerDestinationObserver> {

	SBNotificationBannerDestination* _notificationBannerDestination;

}

@property (nonatomic,readonly) SBNotificationBannerDestination * notificationBannerDestination;              //@synthesize notificationBannerDestination=_notificationBannerDestination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)state;
-(void)dealloc;
-(id)initWithNotificationBannerDestination:(id)arg1 ;
-(void)notificationBannerDestinationWillPresentLongLook:(id)arg1 ;
-(void)notificationBannerDestinationDidPresentLongLook:(id)arg1 ;
-(void)notificationBannerDestinationWillDismissLongLook:(id)arg1 ;
-(void)notificationBannerDestinationDidDismissLongLook:(id)arg1 ;
-(SBNotificationBannerDestination *)notificationBannerDestination;
@end

