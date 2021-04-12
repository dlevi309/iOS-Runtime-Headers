/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface HKDeletedObject : NSObject <NSSecureCoding> {

	NSUUID* _UUID;
	NSDictionary* _metadata;
	long long _externalSyncObjectCode;

}

@property (copy) NSDictionary * metadata;                                   //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) long long externalSyncObjectCode;              //@synthesize externalSyncObjectCode=_externalSyncObjectCode - In the implementation block
@property (readonly) NSUUID * UUID;                                         //@synthesize UUID=_UUID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_deletedObjectWithUUID:(id)arg1 metadata:(id)arg2 ;
+(id)_metadataWithSyncIdentifier:(id)arg1 syncVersion:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSUUID *)UUID;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(long long)externalSyncObjectCode;
-(void)setExternalSyncObjectCode:(long long)arg1 ;
@end

