/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordZoneID, NSString, NSMutableDictionary;

@interface PKCloudRecordArrayDatabaseZone : NSObject <NSSecureCoding> {

	CKRecordZoneID* _zoneID;
	NSString* _databaseIdentifier;
	NSMutableDictionary* _cloudRecordByZoneRecord;

}

@property (nonatomic,retain) NSMutableDictionary * cloudRecordByZoneRecord;              //@synthesize cloudRecordByZoneRecord=_cloudRecordByZoneRecord - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)allItems;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id)descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2 ;
-(void)addCloudRecord:(id)arg1 ;
-(id)allRecordNames;
-(id)allRecordsWithRecordType:(id)arg1 ;
-(void)applyCloudRecordDatabaseZone:(id)arg1 ;
-(id)initWithZoneID:(id)arg1 databaseIdentifier:(id)arg2 ;
-(NSMutableDictionary *)cloudRecordByZoneRecord;
-(void)setCloudRecordByZoneRecord:(NSMutableDictionary *)arg1 ;
-(id)allObjects;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

