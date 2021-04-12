/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(long long)externalSyncObjectCode;
-(void)setExternalSyncObjectCode:(long long)arg1 ;
-(NSDictionary *)metadata;
-(BOOL)isEqual:(id)arg1 ;
@end

