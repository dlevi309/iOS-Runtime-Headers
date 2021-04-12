/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDXPCActivityInterfacing.h>

@class NSString;

@interface HMDXPCActivityInterface : HMFObject <HMDXPCActivityInterfacing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)stateForXPCActivity:(id)arg1 ;
-(void)registerXPCActivityWithActivityIdentifier:(id)arg1 criteria:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(id)criteriaForXPCActivity:(id)arg1 ;
-(void)setCriteria:(id)arg1 forXPCActivity:(id)arg2 ;
-(BOOL)setState:(long long)arg1 forXPCActivity:(id)arg2 ;
-(void)unregisterXPCActivityWithActivityIdentifier:(id)arg1 ;
@end

