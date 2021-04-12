/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


#import <MobileTimer/MobileTimer-Structs.h>
@class NSString, MTOSTransaction;

@interface MTCFUserNotification : NSObject {

	NSString* _identifier;
	/*^block*/id _handler;
	MTOSTransaction* _transaction;
	CFUserNotificationRef _notification;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) MTOSTransaction * transaction;                   //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) CFUserNotificationRef notification;              //@synthesize notification=_notification - In the implementation block
-(id)handler;
-(NSString *)identifier;
-(void)setHandler:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(CFUserNotificationRef)notification;
-(MTOSTransaction *)transaction;
-(void)setTransaction:(MTOSTransaction *)arg1 ;
-(void)setNotification:(CFUserNotificationRef)arg1 ;
@end

