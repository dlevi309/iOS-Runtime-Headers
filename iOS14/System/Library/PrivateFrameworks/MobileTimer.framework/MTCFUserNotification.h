/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTransaction:(MTOSTransaction *)arg1 ;
-(void)setNotification:(CFUserNotificationRef)arg1 ;
-(CFUserNotificationRef)notification;
-(void)setHandler:(id)arg1 ;
-(MTOSTransaction *)transaction;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)handler;
@end

