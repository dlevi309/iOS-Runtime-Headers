/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
*/

#import <libMobileGestaltExtensions.dylib/libMobileGestaltExtensions.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSMutableSet, NSString;

@interface MGNotificationObserver : NSObject <NSCopying, MCProfileConnectionObserver> {

	NSMutableSet* _blocks;
	int _type;
	NSString* _argument;
	SCD_Union_MG2* _registration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_removeBlock:(/*^block*/id)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_addBlock:(/*^block*/id)arg1 ;
-(void)_cancelRegistration;
-(void)startDynaStoreMonitoringWithArgument:(id)arg1 ;
-(void)invokeBlocks;
-(id)initWithType:(int)arg1 argument:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

