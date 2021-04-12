/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TUCTCapabilitiesState.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TUPubliclyAccessibleCopying.h>

@class NSSet, NSString;

@interface TUThumperCTCapabilitiesState : TUCTCapabilitiesState <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying> {

	BOOL _approved;
	BOOL _associated;
	BOOL _supportsDefaultPairedDevice;
	NSSet* _approvedSecondaryDeviceIDs;
	NSString* _accountID;
	NSString* _localDeviceID;

}

@property (assign,getter=isApproved,nonatomic) BOOL approved;                  //@synthesize approved=_approved - In the implementation block
@property (nonatomic,copy) NSSet * approvedSecondaryDeviceIDs;                 //@synthesize approvedSecondaryDeviceIDs=_approvedSecondaryDeviceIDs - In the implementation block
@property (nonatomic,copy) NSString * accountID;                               //@synthesize accountID=_accountID - In the implementation block
@property (assign,getter=isAssociated,nonatomic) BOOL associated;              //@synthesize associated=_associated - In the implementation block
@property (nonatomic,copy) NSString * localDeviceID;                           //@synthesize localDeviceID=_localDeviceID - In the implementation block
@property (assign,nonatomic) BOOL supportsDefaultPairedDevice;                 //@synthesize supportsDefaultPairedDevice=_supportsDefaultPairedDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isApproved;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(NSString *)localDeviceID;
-(void)setLocalDeviceID:(NSString *)arg1 ;
-(NSSet *)approvedSecondaryDeviceIDs;
-(BOOL)supportsDefaultPairedDevice;
-(BOOL)isAssociated;
-(id)publiclyAccessibleCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToCapabilitiesState:(id)arg1 ;
-(id)publiclyAccessibleCopy;
-(id)initWithCapabilityInfo:(id)arg1 ;
-(void)setApproved:(BOOL)arg1 ;
-(void)setApprovedSecondaryDeviceIDs:(NSSet *)arg1 ;
-(void)setAssociated:(BOOL)arg1 ;
-(void)setSupportsDefaultPairedDevice:(BOOL)arg1 ;
@end

