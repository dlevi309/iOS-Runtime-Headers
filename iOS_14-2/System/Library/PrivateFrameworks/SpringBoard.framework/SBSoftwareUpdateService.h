/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

