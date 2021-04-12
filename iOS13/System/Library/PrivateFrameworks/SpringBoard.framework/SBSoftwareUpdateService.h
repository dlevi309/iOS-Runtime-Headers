/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSystemServiceServerSoftwareUpdateDelegate.h>

@class FBServiceClientAuthenticator, NSString;

@interface SBSoftwareUpdateService : NSObject <SBSystemServiceServerSoftwareUpdateDelegate> {

	FBServiceClientAuthenticator* _serviceClientSoftwareUpdatePasscodePolicyEntitlementAuthenticator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_init;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setPasscodePolicy:(long long)arg3 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 passcodePolicy:(/*^block*/id)arg3 ;
@end

