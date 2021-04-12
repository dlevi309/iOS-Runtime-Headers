/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSURL, NSPersistentCloudKitContainerOptions, NSDictionary;

@interface NSPersistentStoreDescription : NSObject <NSCopying> {

	NSMutableDictionary* _options;
	NSString* _type;
	NSString* _configuration;
	NSURL* _url;

}

@property (retain) NSPersistentCloudKitContainerOptions * cloudKitContainerOptions; 
@property (copy) NSString * type;                                                                //@synthesize type=_type - In the implementation block
@property (copy) NSString * configuration;                                                       //@synthesize configuration=_configuration - In the implementation block
@property (copy) NSURL * URL;                                                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options; 
@property (getter=isReadOnly) BOOL readOnly; 
@property (assign) double timeout; 
@property (nonatomic,copy,readonly) NSDictionary * sqlitePragmas; 
@property (assign) BOOL shouldAddStoreAsynchronously; 
@property (assign) BOOL shouldMigrateStoreAutomatically; 
@property (assign) BOOL shouldInferMappingModelAutomatically; 
+(id)persistentStoreDescriptionWithURL:(id)arg1 ;
+(id)inMemoryPersistentStoreDescription;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)options;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setOption:(id)arg1 forKey:(id)arg2 ;
-(void)setConfiguration:(NSString *)arg1 ;
-(NSString *)configuration;
-(void)setOption:(id)arg1 forMirroringKey:(id)arg2 ;
-(id)mirroringDelegate;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(id)mirroringOptions;
-(NSPersistentCloudKitContainerOptions *)cloudKitContainerOptions;
-(void)setMirroringDelegate:(id)arg1 ;
-(BOOL)shouldAddStoreAsynchronously;
-(void)setCloudKitContainerOptions:(NSPersistentCloudKitContainerOptions *)arg1 ;
-(NSDictionary *)sqlitePragmas;
-(void)setValue:(id)arg1 forPragmaNamed:(id)arg2 ;
-(void)setShouldAddStoreAsynchronously:(BOOL)arg1 ;
-(BOOL)shouldInvokeCompletionHandlerConcurrently;
-(void)setShouldInvokeCompletionHandlerConcurrently:(BOOL)arg1 ;
-(BOOL)shouldMigrateStoreAutomatically;
-(void)setShouldMigrateStoreAutomatically:(BOOL)arg1 ;
-(BOOL)shouldInferMappingModelAutomatically;
-(void)setShouldInferMappingModelAutomatically:(BOOL)arg1 ;
-(BOOL)usesPersistentHistoryTracking;
-(void)setUsesPersistentHistoryTracking:(BOOL)arg1 ;
@end

