/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSUUID *)sampleUUID;
-(HKConceptIdentifier *)conceptIdentifier;
-(id)initWithSampleUUID:(id)arg1 conceptIdentifier:(id)arg2 ;
@end

