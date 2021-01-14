/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordID;

@interface HMBShareUserID : HMFObject <NSSecureCoding> {

	CKRecordID* _userRecordID;

}

@property (readonly) CKRecordID * userRecordID;              //@synthesize userRecordID=_userRecordID - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)logIdentifier;
-(CKRecordID *)userRecordID;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUserRecordID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

