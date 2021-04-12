/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,readonly) NSString * zoneName;                 //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,readonly) NSString * ownerName;                //@synthesize ownerName=_ownerName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)cachedRecordZoneIDWithName:(id)arg1 ownerName:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithZoneName:(id)arg1 ownerName:(id)arg2 ;
-(NSString *)zoneName;
-(NSString *)ownerName;
-(id)CKPropertiesDescription;
-(id)_initWithZoneName:(id)arg1 ownerName:(id)arg2 ;
-(id)ckShortDescription;
-(id)sqliteRepresentation;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)CKPropertiesDescriptionWithProperties:(id)arg1 ;
-(long long)compareToRecordZoneID:(id)arg1 ;
-(BOOL)isDefaultRecordZoneID;
-(id)CKXPCSuitableString;
@end

