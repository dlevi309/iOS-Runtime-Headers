/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID, NSData;

@interface _HDAssociationInsertionJournalEntry : HDJournalEntry {

	BOOL _enforceSameSource;
	NSUUID* _parentUUID;
	NSData* _childUUIDsData;
	long long _provenance;

}

@property (nonatomic,readonly) NSUUID * parentUUID;                  //@synthesize parentUUID=_parentUUID - In the implementation block
@property (nonatomic,readonly) NSData * childUUIDsData;              //@synthesize childUUIDsData=_childUUIDsData - In the implementation block
@property (nonatomic,readonly) long long provenance;                 //@synthesize provenance=_provenance - In the implementation block
@property (nonatomic,readonly) BOOL enforceSameSource;               //@synthesize enforceSameSource=_enforceSameSource - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(long long)provenance;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)parentUUID;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 enforceSameSource:(BOOL)arg4 ;
-(BOOL)enforceSameSource;
-(NSData *)childUUIDsData;
@end

