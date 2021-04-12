/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKIPAddressProviding.h>

@protocol CRKIPAddressProviding, OS_dispatch_queue;
@class NSObject, NSString;

@interface CRKNotifyWhenNetworkChangesIPAddressProvider : NSObject <CRKIPAddressProviding> {

	id<CRKIPAddressProviding> mBaseProvider;
	NSObject*<OS_dispatch_queue> mQueue;
	int mNetworkChangeNotificationToken;
	NSString* _IPAddress;

}

@property (nonatomic,copy) NSString * IPAddress;                    //@synthesize IPAddress=_IPAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)subscribeToNetworkChangeNotifications;
-(void)dealloc;
-(NSString *)IPAddress;
-(id)initWithIPAddressProvider:(id)arg1 ;
-(void)unsubscribeFromNetworkChangeNotifications;
-(void)networkDidChange;
-(void)networkDidChangeDebounced;
-(void)setIPAddress:(NSString *)arg1 ;
@end

