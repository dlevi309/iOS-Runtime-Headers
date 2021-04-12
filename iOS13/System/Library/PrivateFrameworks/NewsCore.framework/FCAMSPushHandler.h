/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)handleNotificationResponse:(id)arg1 ;
-(void)setLazyHandler:(NFLazy *)arg1 ;
@end

