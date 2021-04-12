/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKIssuerProvisioningExtensionStatus : NSObject <NSSecureCoding> {

	BOOL _requiresAuthentication;
	BOOL _passEntriesAvailable;
	BOOL _remotePassEntriesAvailable;

}

@property (assign,nonatomic) BOOL requiresAuthentication;                  //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (assign,nonatomic) BOOL passEntriesAvailable;                    //@synthesize passEntriesAvailable=_passEntriesAvailable - In the implementation block
@property (assign,nonatomic) BOOL remotePassEntriesAvailable;              //@synthesize remotePassEntriesAvailable=_remotePassEntriesAvailable - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)requiresAuthentication;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPassEntriesAvailable:(BOOL)arg1 ;
-(void)setRemotePassEntriesAvailable:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)passEntriesAvailable;
-(BOOL)remotePassEntriesAvailable;
@end

