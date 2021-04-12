/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordID;

@interface CKSyncEngineRecordModification : NSObject <NSSecureCoding, NSCopying> {

	CKRecordID* _recordID;
	long long _type;

}

@property (nonatomic,readonly) CKRecordID * recordID;              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recordModificationsWithOppositeTypeFromRecordModifications:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKRecordID *)recordID;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)initWithRecordID:(id)arg1 type:(long long)arg2 ;
-(id)oppositeTypeModification;
@end

