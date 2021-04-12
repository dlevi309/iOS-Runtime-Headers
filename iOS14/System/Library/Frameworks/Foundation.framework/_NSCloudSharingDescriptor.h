/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOperation:(long long)arg1 ;
-(long long)operation;
-(void)setInvitationsSentViaThirdPartyService:(BOOL)arg1 ;
-(BOOL)invitationsSentViaThirdPartyService;
-(BOOL)publicShare;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPublicShare:(BOOL)arg1 ;
-(NSString *)sharedContentType;
-(void)setSharedContentType:(NSString *)arg1 ;
-(long long)numberOfInvitations;
-(id)_variantSubstrings;
-(void)setNumberOfInvitations:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

