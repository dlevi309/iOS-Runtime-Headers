/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordID, CNContact, NSString;

@interface CKDiscoveredUserInfo : NSObject <NSSecureCoding, NSCopying> {

	CKRecordID* _userRecordID;
	CNContact* _displayContact;

}

@property (nonatomic,copy,readonly) CKRecordID * userRecordID;               //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,copy,readonly) CNContact * displayContact;              //@synthesize displayContact=_displayContact - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)CKPropertiesDescription;
-(CKRecordID *)userRecordID;
-(id)initWithUserRecordID:(id)arg1 displayContact:(id)arg2 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(CNContact *)displayContact;
@end

