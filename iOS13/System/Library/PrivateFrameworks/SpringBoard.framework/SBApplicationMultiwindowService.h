/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBApplicationServerMultiwindowDelegate.h>

@class FBServiceClientAuthenticator, NSString;

@interface SBApplicationMultiwindowService : NSObject <SBApplicationServerMultiwindowDelegate> {

	FBServiceClientAuthenticator* _serviceClientAccessEntitlementAuthenticator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg1 ;
-(void)applicationServer:(id)arg1 client:(id)arg2 showAllWindowsForBundleIdentifier:(id)arg3 ;
@end

