/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFUbiquityImportOperation.h>

@class NSString, NSManagedObjectModel;

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation {

	NSString* _modelVersionHash;
	NSManagedObjectModel* _model;

}

@property (nonatomic,readonly) NSString * modelVersionHash;               //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (nonatomic,readonly) NSManagedObjectModel * model;              //@synthesize model=_model - In the implementation block
-(NSManagedObjectModel *)model;
-(id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(id)description;
-(NSString *)modelVersionHash;
-(void)dealloc;
@end

