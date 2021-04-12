/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/CLSettingsManagerInternal.h>
#import <libobjc.A.dylib/CLSettingsManagerProtocol.h>

@class NSString;

@interface CLSettingsManager : CLSettingsManagerInternal <CLSettingsManagerProtocol> {

	id _notificationObserver;

}

@property (nonatomic,retain) id notificationObserver;               //@synthesize notificationObserver=_notificationObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
-(id)init;
-(void)refresh;
-(id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(R)arg3 :(id)arg4 ;
-(void)beginService;
-(void)endService;
-(void)setNotificationObserver:(id)arg1 ;
-(id)notificationObserver;
@end

