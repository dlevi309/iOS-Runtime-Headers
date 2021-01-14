/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface DAKeyInvitationRequestConfig : NSObject <NSSecureCoding> {

	NSUUID* _sharingSessionIdentifier;
	NSString* _ownerIdsIdentifier;

}

@property (nonatomic,readonly) NSUUID * sharingSessionIdentifier;              //@synthesize sharingSessionIdentifier=_sharingSessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * ownerIdsIdentifier;                  //@synthesize ownerIdsIdentifier=_ownerIdsIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSharingSessionIdentifier:(id)arg1 ownerIdsIdentifier:(id)arg2 ;
-(id)description;
-(NSUUID *)sharingSessionIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ownerIdsIdentifier;
@end

