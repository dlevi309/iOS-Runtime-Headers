/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)sharingSessionIdentifier;
-(id)initWithSharingSessionIdentifier:(id)arg1 ownerIdsIdentifier:(id)arg2 ;
-(NSString *)ownerIdsIdentifier;
@end

