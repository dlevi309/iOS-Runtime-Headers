/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class NSDictionary, HDFHIRIngestionResourceFetchOperation;

@interface HDClinicalIngestionTaskWorkItem : NSObject {

	NSDictionary* _targetResourceURLsBySourceResource;
	HDFHIRIngestionResourceFetchOperation* _resourceFetchOperation;

}

@property (nonatomic,copy,readonly) NSDictionary * targetResourceURLsBySourceResource;                      //@synthesize targetResourceURLsBySourceResource=_targetResourceURLsBySourceResource - In the implementation block
@property (nonatomic,readonly) HDFHIRIngestionResourceFetchOperation * resourceFetchOperation;              //@synthesize resourceFetchOperation=_resourceFetchOperation - In the implementation block
-(id)initWithResourceFetchOperation:(id)arg1 ;
-(HDFHIRIngestionResourceFetchOperation *)resourceFetchOperation;
-(NSDictionary *)targetResourceURLsBySourceResource;
-(id)initWithTargetResourceURLsBySourceResource:(id)arg1 ;
@end

