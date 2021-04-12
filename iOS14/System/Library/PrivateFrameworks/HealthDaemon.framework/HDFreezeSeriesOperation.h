/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalableOperation.h>

@class NSUUID, NSDictionary;

@interface HDFreezeSeriesOperation : HDJournalableOperation {

	NSUUID* _identifier;
	NSDictionary* _metadata;
	Class _entityClass;
	NSUUID* _frozenIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) Class entityClass;                         //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,readonly) NSUUID * frozenIdentifier;                 //@synthesize frozenIdentifier=_frozenIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)entityClass;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSDictionary *)metadata;
-(id)initWithIdentifier:(id)arg1 metadata:(id)arg2 entityClass:(Class)arg3 ;
-(NSUUID *)frozenIdentifier;
@end

