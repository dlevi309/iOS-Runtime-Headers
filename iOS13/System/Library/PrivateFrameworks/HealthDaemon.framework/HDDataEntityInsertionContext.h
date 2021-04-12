/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, HDDataOriginProvenance;

@interface HDDataEntityInsertionContext : NSObject {

	HDProfile* _profile;
	double _defaultCreationDate;
	BOOL _skipInsertionFilter;
	HDDataOriginProvenance* _provenance;
	double _creationDate;

}

@property (nonatomic,readonly) HDDataOriginProvenance * provenance;              //@synthesize provenance=_provenance - In the implementation block
@property (nonatomic,readonly) double creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) BOOL skipInsertionFilter;                         //@synthesize skipInsertionFilter=_skipInsertionFilter - In the implementation block
-(double)creationDate;
-(HDDataOriginProvenance *)provenance;
-(void)prepareObjectForInsertion:(id)arg1 ;
-(BOOL)skipInsertionFilter;
-(id)initWithProvenance:(id)arg1 creationDate:(double)arg2 skipInsertionFilter:(BOOL)arg3 profile:(id)arg4 ;
@end

