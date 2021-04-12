/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@class NSString;

@interface MTLanguageChangeListener : NSObject <MTAgentNotificationListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_languageChangeNotification;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)_handleLanguageChanged;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)liveDarwinNotifications;
@end

