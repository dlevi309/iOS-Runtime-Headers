/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFRecordStorage.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSMutableDictionary, NSString, NSDate, WFWorkflowQuarantine, WFFileRepresentation, NSDictionary, WFWorkflowIcon, NSArray;

@interface WFWorkflowFile : NSObject <WFRecordStorage, NSItemProviderWriting> {

	NSMutableDictionary* _rootObject;
	NSString* _name;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	WFWorkflowQuarantine* _quarantine;
	WFFileRepresentation* _file;
	NSString* _identifier;

}

@property (nonatomic,readonly) WFFileRepresentation * file;                                        //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * rootObject;                                          //@synthesize rootObject=_rootObject - In the implementation block
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
-(NSDate *)modificationDate;
-(void)setActions:(NSArray *)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(WFFileRepresentation *)file;
-(id)fileDataWithError:(id*)arg1 ;
-(id)init;
-(NSArray *)actions;
-(unsigned long long)estimatedSize;
-(NSDictionary *)rootObject;
-(void)setCreationDate:(NSDate *)arg1 ;
-(WFWorkflowIcon *)icon;
-(void)setIcon:(WFWorkflowIcon *)arg1 ;
-(id)descriptor;
-(NSString *)name;
-(NSDate *)creationDate;
-(NSString *)minimumClientVersion;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSArray *)inputClasses;
-(void)setMinimumClientVersion:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)recordRepresentationWithError:(id*)arg1 ;
-(id)initWithFileData:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(NSArray *)workflowTypes;
-(void)setWorkflowTypes:(NSArray *)arg1 ;
-(void)setInputClasses:(NSArray *)arg1 ;
-(NSString *)lastMigratedClientVersion;
-(void)setLastMigratedClientVersion:(NSString *)arg1 ;
-(void)setImportQuestions:(NSArray *)arg1 ;
-(NSArray *)importQuestions;
-(id)initWithDictionary:(id)arg1 name:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 name:(id)arg2 performMigration:(BOOL)arg3 ;
-(id)initWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)initWithDescriptor:(id)arg1 performMigration:(BOOL)arg2 error:(id*)arg3 ;
-(id)writeToDiskWithFormat:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)writeToDiskWithError:(id*)arg1 ;
-(BOOL)writeToFileURL:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)fileDataWithFormat:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)writeToOutputStream:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)migrateRootObject;
-(WFWorkflowQuarantine *)quarantine;
-(void)setQuarantine:(WFWorkflowQuarantine *)arg1 ;
@end

