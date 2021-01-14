/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)enabled;
-(void)setup;
-(void)setNotification:(NSString *)arg1 ;
-(id)init;
-(NSString *)notification;
-(void)setEnabled:(BOOL)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)dealloc;
-(void)observeNotification:(id)arg1 ;
@end

