/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFRecordStorage.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSArray, NSString, NSDate, WFWorkflowQuarantine, NSMutableDictionary, WFFileRepresentation, NSDictionary, WFWorkflowIcon;

@interface WFWorkflowFile : NSObject <WFRecordStorage, NSItemProviderWriting> {

	NSString* _name;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	WFWorkflowQuarantine* _quarantine;
	NSMutableDictionary* _rootObject;
	WFFileRepresentation* _file;

}

@property (nonatomic,readonly) NSMutableDictionary * rootObject;                                   //@synthesize rootObject=_rootObject - In the implementation block
@property (nonatomic,readonly) WFFileRepresentation * file;                                        //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) NSDictionary * rootObjectForExport; 
@property (nonatomic,copy) NSString * name;                                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) WFWorkflowIcon * icon; 
@property (nonatomic,retain) NSDate * creationDate;                                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                                            //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) WFWorkflowQuarantine * quarantine;                                    //@synthesize quarantine=_quarantine - In the implementation block
@property (nonatomic,copy) NSArray * workflowTypes; 
@property (nonatomic,copy) NSArray * inputClasses; 
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,copy) NSArray * importQuestions; 
@property (nonatomic,copy) NSString * lastMigratedClientVersion; 
@property (nonatomic,copy) NSString * minimumClientVersion; 
@property (nonatomic,readonly) unsigned long long estimatedSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
+(id)writableTypeIdentifiersForItemProvider;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)rootObject;
-(WFFileRepresentation *)file;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(NSArray *)inputClasses;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)descriptor;
-(NSArray *)actions;
-(WFWorkflowIcon *)icon;
-(void)setIcon:(WFWorkflowIcon *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(unsigned long long)estimatedSize;
-(id)recordRepresentationWithError:(id*)arg1 ;
-(id)initWithFileData:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(NSArray *)workflowTypes;
-(id)initWithDescriptor:(id)arg1 performMigration:(BOOL)arg2 error:(id*)arg3 ;
-(id)writeToDiskWithError:(id*)arg1 ;
-(NSDictionary *)rootObjectForExport;
-(WFWorkflowQuarantine *)quarantine;
-(void)setQuarantine:(WFWorkflowQuarantine *)arg1 ;
-(id)initWithDictionary:(id)arg1 name:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 name:(id)arg2 performMigration:(BOOL)arg3 ;
-(void)setWorkflowTypes:(NSArray *)arg1 ;
-(void)setInputClasses:(NSArray *)arg1 ;
-(NSArray *)importQuestions;
-(void)setImportQuestions:(NSArray *)arg1 ;
-(NSString *)lastMigratedClientVersion;
-(void)setLastMigratedClientVersion:(NSString *)arg1 ;
-(NSString *)minimumClientVersion;
-(void)setMinimumClientVersion:(NSString *)arg1 ;
-(id)fileDataWithError:(id*)arg1 ;
-(BOOL)writeToOutputStream:(id)arg1 error:(id*)arg2 ;
-(BOOL)migrateRootObject;
-(void)migrateTypesForImport;
@end

