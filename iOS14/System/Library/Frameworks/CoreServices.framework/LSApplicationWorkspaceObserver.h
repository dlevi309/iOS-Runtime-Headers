/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface LSApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol, NSSecureCoding> {

	NSUUID* _uuid;

}

@property (nonatomic,retain) NSUUID * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(NSUUID *)uuid;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(id)init;
-(void)deviceManagementPolicyDidChange:(id)arg1 ;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)networkUsageChanged:(BOOL)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidFailToUninstall:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)applicationIconDidChange:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
@end

