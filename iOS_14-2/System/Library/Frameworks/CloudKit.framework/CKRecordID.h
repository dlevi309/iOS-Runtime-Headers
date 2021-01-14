/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKXPCSuitableString.h>
#import <libobjc.A.dylib/CKSQLiteItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordZoneID;

@interface CKRecordID : NSObject <CKXPCSuitableString, CKSQLiteItem, NSSecureCoding, NSCopying> {

	NSString* _recordName;
	CKRecordZoneID* _zoneID;

}

@property (nonatomic,copy) NSString * recordName;                   //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;                 //@synthesize zoneID=_zoneID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)isValidRecordName:(id)arg1 outError:(id*)arg2 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(CKRecordZoneID *)zoneID;
-(id)init;
-(id)ckShortDescription;
-(void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(NSString *)description;
-(id)CKPropertiesDescriptionWithProperties:(id)arg1 ;
-(id)CKXPCSuitableString;
-(long long)compareToRecordID:(id)arg1 ;
-(void)setRecordName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRecordName:(id)arg1 ;
-(id)sqliteRepresentation;
-(NSString *)recordName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRecordName:(id)arg1 zoneID:(id)arg2 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
@end

