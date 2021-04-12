/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLogging;
@class NSMutableSet, NSString;

@interface HMDNotificationRegistration : HMFObject <HMFLogging> {

	NSMutableSet* _registeredNotifications;
	id<HMFLogging> _registerer;

}

@property (nonatomic,readonly) NSMutableSet * registeredNotifications;              //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,__weak,readonly) id<HMFLogging> registerer;                    //@synthesize registerer=_registerer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSMutableSet *)registeredNotifications;
-(id)logIdentifier;
-(id)initWithRegisterer:(id)arg1 ;
-(void)addObserver:(SEL)arg1 name:(id)arg2 object:(id)arg3 ;
-(id<HMFLogging>)registerer;
@end

