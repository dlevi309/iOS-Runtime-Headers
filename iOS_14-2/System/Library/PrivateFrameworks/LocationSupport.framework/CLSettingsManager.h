/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/CLSettingsManagerInternal.h>
#import <libobjc.A.dylib/CLSettingsManagerProtocol.h>

@class NSString;

@interface CLSettingsManager : CLSettingsManagerInternal <CLSettingsManagerProtocol> {

	id _notificationObserver;

}

@property (nonatomic,retain) id notificationObserver;               //@synthesize notificationObserver=_notificationObserver - In the implementation block
@property (assign,nonatomic) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refresh;
-(id)init;
-(void)setNotificationObserver:(id)arg1 ;
-(id)notificationObserver;
-(void)beginService;
-(void)endService;
-(id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(R)arg3 :(id)arg4 ;
@end

