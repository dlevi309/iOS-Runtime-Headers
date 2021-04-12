/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(NSManagedObjectModel *)model;
-(NSString *)modelVersionHash;
-(id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
@end

