/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSString, NSObject;

@interface CKDClientInfo : NSObject {

	NSString* _cachedHostname;
	NSObject*<OS_dispatch_queue> _hostCallbackQueue;
	MGNotificationTokenStructRef _hostNotificationToken;

}

@property (nonatomic,readonly) NSString * hostname; 
+(id)sharedClientInfo;
-(id)init;
-(void)dealloc;
-(id)_init;
-(NSString *)hostname;
-(void)_refreshHostname;
@end

