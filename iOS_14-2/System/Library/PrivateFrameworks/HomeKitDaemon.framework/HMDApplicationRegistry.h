/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol HMFLocking;
@class NSMutableSet, LSApplicationWorkspace, NSArray, NSString;

@interface HMDApplicationRegistry : HMFObject <HMFLogging, LSApplicationWorkspaceObserverProtocol> {

	id<HMFLocking> _lock;
	NSMutableSet* _applications;
	LSApplicationWorkspace* _workspace;

}

@property (copy,readonly) NSArray * applications; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedRegistry;
-(id)init;
-(NSArray *)applications;
-(id)applicationInfoForBundleIdentifier:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)dealloc;
-(id)applicationInfoForBundleURL:(id)arg1 ;
@end

