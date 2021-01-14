/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface _TVRXManagedConfigManager : NSObject <MCProfileConnectionObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)refreshState;
-(id)init;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(BOOL)managedConfigProfileInstalled;
@end

