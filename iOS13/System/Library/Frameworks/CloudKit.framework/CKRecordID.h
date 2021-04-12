/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) NSString * recordName;                 //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;               //@synthesize zoneID=_zoneID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)isValidRecordName:(id)arg1 outError:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKRecordZoneID *)zoneID;
-(NSString *)recordName;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)initWithRecordName:(id)arg1 zoneID:(id)arg2 ;
-(void)setRecordName:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
-(id)sqliteRepresentation;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)CKPropertiesDescriptionWithProperties:(id)arg1 ;
-(id)initWithRecordName:(id)arg1 ;
-(id)CKXPCSuitableString;
-(long long)compareToRecordID:(id)arg1 ;
@end

