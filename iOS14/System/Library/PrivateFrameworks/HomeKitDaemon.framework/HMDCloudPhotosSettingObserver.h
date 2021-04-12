/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSNotificationCenter, NSString;

@interface HMDCloudPhotosSettingObserver : HMFObject <HMFLogging> {

	BOOL _cloudPhotosEnabled;
	/*^block*/id _accountFactory;
	NSNotificationCenter* _notificationCenter;

}

@property (getter=isCloudPhotosEnabled) BOOL cloudPhotosEnabled;              //@synthesize cloudPhotosEnabled=_cloudPhotosEnabled - In the implementation block
@property (readonly) id accountFactory;                                       //@synthesize accountFactory=_accountFactory - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedInstance;
-(id)init;
-(NSNotificationCenter *)notificationCenter;
-(id)accountFactory;
-(BOOL)isCloudPhotosEnabled;
-(id)initWithAccountFactory:(/*^block*/id)arg1 notificationCenter:(id)arg2 ;
-(void)handleAccountStoreDidChangeNotification:(id)arg1 ;
-(BOOL)fetchCloudPhotosEnabled;
-(void)setCloudPhotosEnabled:(BOOL)arg1 ;
@end

