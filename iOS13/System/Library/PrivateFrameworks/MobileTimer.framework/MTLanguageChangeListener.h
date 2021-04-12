/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)liveDarwinNotifications;
-(void)_handleLanguageChanged;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

