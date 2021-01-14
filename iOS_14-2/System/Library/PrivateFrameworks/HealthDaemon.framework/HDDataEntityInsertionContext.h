/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, HDDataOriginProvenance;

@interface HDDataEntityInsertionContext : NSObject {

	HDProfile* _profile;
	double _defaultCreationDate;
	BOOL _skipInsertionFilter;
	BOOL _resolveAssociations;
	HDDataOriginProvenance* _provenance;
	double _creationDate;

}

@property (nonatomic,readonly) HDDataOriginProvenance * provenance;              //@synthesize provenance=_provenance - In the implementation block
@property (nonatomic,readonly) double creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) BOOL skipInsertionFilter;                         //@synthesize skipInsertionFilter=_skipInsertionFilter - In the implementation block
@property (nonatomic,readonly) BOOL resolveAssociations;                         //@synthesize resolveAssociations=_resolveAssociations - In the implementation block
-(HDDataOriginProvenance *)provenance;
-(double)creationDate;
-(void)prepareObjectForInsertion:(id)arg1 ;
-(BOOL)skipInsertionFilter;
-(BOOL)resolveAssociations;
-(id)initWithProvenance:(id)arg1 creationDate:(double)arg2 skipInsertionFilter:(BOOL)arg3 resolveAssociations:(BOOL)arg4 profile:(id)arg5 ;
@end

