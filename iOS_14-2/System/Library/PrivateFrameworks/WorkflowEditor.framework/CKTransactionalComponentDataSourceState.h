/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class CKTransactionalComponentDataSourceConfiguration, NSArray;

@interface CKTransactionalComponentDataSourceState : NSObject {

	CKTransactionalComponentDataSourceConfiguration* _configuration;
	NSArray* _sections;

}

@property (nonatomic,copy,readonly) NSArray * sections;                                                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) CKTransactionalComponentDataSourceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(long long)numberOfSections;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)sections;
-(id)objectAtIndexPath:(id)arg1 ;
-(id)description;
-(CKTransactionalComponentDataSourceConfiguration *)configuration;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(long long)numberOfObjectsInSection:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 sections:(id)arg2 ;
-(void)enumerateObjectsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

