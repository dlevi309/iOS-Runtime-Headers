/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordID;

@interface HMBShareUserID : HMFObject <NSSecureCoding> {

	CKRecordID* _userRecordID;

}

@property (readonly) CKRecordID * userRecordID;              //@synthesize userRecordID=_userRecordID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKRecordID *)userRecordID;
-(id)initWithUserRecordID:(id)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
@end

