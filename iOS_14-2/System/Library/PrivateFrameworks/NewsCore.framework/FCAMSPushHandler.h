/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NFLazy;

@interface FCAMSPushHandler : NSObject {

	NFLazy* _lazyHandler;

}

@property (nonatomic,retain) NFLazy * lazyHandler;              //@synthesize lazyHandler=_lazyHandler - In the implementation block
-(id)init;
-(void)handleNotification:(id)arg1 ;
-(BOOL)shouldHandleNotification:(id)arg1 ;
-(BOOL)shouldHandleNotificationResponse:(id)arg1 ;
-(NFLazy *)lazyHandler;
-(void)setLazyHandler:(NFLazy *)arg1 ;
-(void)handleNotificationResponse:(id)arg1 ;
@end

