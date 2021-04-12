/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)logIdentifier;
-(NSMutableSet *)registeredNotifications;
-(id)initWithRegisterer:(id)arg1 ;
-(void)addObserver:(SEL)arg1 name:(id)arg2 object:(id)arg3 ;
-(id<HMFLogging>)registerer;
@end

