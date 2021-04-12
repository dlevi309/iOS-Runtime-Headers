/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


@class NSString;

@interface MCLNotificationCenterObserver : NSObject {

	BOOL _enabled;
	NSString* _notification;
	id _object;

}

@property (nonatomic,copy) NSString * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) id object;                          //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) BOOL enabled;                       //@synthesize enabled=_enabled - In the implementation block
-(id)init;
-(void)dealloc;
-(id)object;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setObject:(id)arg1 ;
-(NSString *)notification;
-(void)setNotification:(NSString *)arg1 ;
-(void)setup;
-(void)observeNotification:(id)arg1 ;
@end

