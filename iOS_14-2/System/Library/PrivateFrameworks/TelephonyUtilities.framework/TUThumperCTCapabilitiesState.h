/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)accountID;
-(NSString *)localDeviceID;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setApproved:(BOOL)arg1 ;
-(void)setAssociated:(BOOL)arg1 ;
-(id)init;
-(id)publiclyAccessibleCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)publiclyAccessibleCopy;
-(BOOL)isAssociated;
-(NSString *)description;
-(BOOL)supportsDefaultPairedDevice;
-(BOOL)isEqualToCapabilitiesState:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)approvedSecondaryDeviceIDs;
-(void)setApprovedSecondaryDeviceIDs:(NSSet *)arg1 ;
-(BOOL)isApproved;
-(void)setLocalDeviceID:(NSString *)arg1 ;
-(void)setSupportsDefaultPairedDevice:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapabilityInfo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

