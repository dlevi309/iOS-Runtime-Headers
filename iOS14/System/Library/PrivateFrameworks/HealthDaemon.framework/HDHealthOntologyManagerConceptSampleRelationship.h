/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSUUID, HKConceptIdentifier;

@interface HDHealthOntologyManagerConceptSampleRelationship : NSObject {

	NSUUID* _sampleUUID;
	HKConceptIdentifier* _conceptIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * sampleUUID;                                  //@synthesize sampleUUID=_sampleUUID - In the implementation block
@property (nonatomic,copy,readonly) HKConceptIdentifier * conceptIdentifier;              //@synthesize conceptIdentifier=_conceptIdentifier - In the implementation block
-(id)init;
-(HKConceptIdentifier *)conceptIdentifier;
-(NSUUID *)sampleUUID;
-(id)initWithSampleUUID:(id)arg1 conceptIdentifier:(id)arg2 ;
@end

