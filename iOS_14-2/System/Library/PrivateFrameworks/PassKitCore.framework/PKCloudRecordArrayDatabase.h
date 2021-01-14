/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary;

@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSMutableDictionary* _cloudRecordByDatabaseZone;

}

@property (nonatomic,retain) NSMutableDictionary * cloudRecordByDatabaseZone;              //@synthesize cloudRecordByDatabaseZone=_cloudRecordByDatabaseZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)allItems;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id)descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2 ;
-(id)countByZoneID;
-(void)addCloudRecord:(id)arg1 ;
-(id)allRecordNames;
-(void)applyCloudRecordDatabase:(id)arg1 ;
-(id)allRecordsWithRecordType:(id)arg1 ;
-(NSMutableDictionary *)cloudRecordByDatabaseZone;
-(void)setCloudRecordByDatabaseZone:(NSMutableDictionary *)arg1 ;
-(id)allObjects;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

