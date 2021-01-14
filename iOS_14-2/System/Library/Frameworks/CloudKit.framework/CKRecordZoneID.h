/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKXPCSuitableString.h>
#import <libobjc.A.dylib/CKSQLiteItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKRecordZoneID : NSObject <CKXPCSuitableString, CKSQLiteItem, NSSecureCoding, NSCopying> {

	NSString* _zoneName;
	NSString* _ownerName;

}

@property (nonatomic,copy,readonly) NSString * zoneName;               //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownerName;              //@synthesize ownerName=_ownerName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)cachedRecordZoneIDWithName:(id)arg1 ownerName:(id)arg2 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)init;
-(id)ckShortDescription;
-(NSString *)zoneName;
-(void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(NSString *)description;
-(id)initWithZoneName:(id)arg1 ownerName:(id)arg2 ;
-(id)_initWithZoneName:(id)arg1 ownerName:(id)arg2 ;
-(id)CKPropertiesDescriptionWithProperties:(id)arg1 ;
-(long long)compareToRecordZoneID:(id)arg1 ;
-(BOOL)isDefaultRecordZoneID;
-(id)CKXPCSuitableString;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)sqliteRepresentation;
-(NSString *)ownerName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

