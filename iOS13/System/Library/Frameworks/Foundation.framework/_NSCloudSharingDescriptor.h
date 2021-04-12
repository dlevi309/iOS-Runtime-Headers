/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding> {

	long long _operation;
	NSString* _sharedContentType;
	long long _numberOfInvitations;
	BOOL _invitationsSentViaThirdPartyService;
	BOOL _publicShare;

}

@property (assign) long long operation;                                   //@synthesize operation=_operation - In the implementation block
@property (assign) BOOL invitationsSentViaThirdPartyService;              //@synthesize invitationsSentViaThirdPartyService=_invitationsSentViaThirdPartyService - In the implementation block
@property (assign) BOOL publicShare;                                      //@synthesize publicShare=_publicShare - In the implementation block
@property (assign) long long numberOfInvitations;                         //@synthesize numberOfInvitations=_numberOfInvitations - In the implementation block
@property (copy) NSString * sharedContentType;                            //@synthesize sharedContentType=_sharedContentType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_variantSubstrings;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(BOOL)invitationsSentViaThirdPartyService;
-(void)setInvitationsSentViaThirdPartyService:(BOOL)arg1 ;
-(BOOL)publicShare;
-(void)setPublicShare:(BOOL)arg1 ;
-(long long)numberOfInvitations;
-(void)setNumberOfInvitations:(long long)arg1 ;
-(NSString *)sharedContentType;
-(void)setSharedContentType:(NSString *)arg1 ;
@end

