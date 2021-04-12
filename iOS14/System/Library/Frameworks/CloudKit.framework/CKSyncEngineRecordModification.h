/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)oppositeTypeModification;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRecordID:(id)arg1 type:(long long)arg2 ;
-(CKRecordID *)recordID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

