/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)inMemoryPersistentStoreDescription;
+(id)persistentStoreDescriptionWithURL:(id)arg1 ;
-(id)mirroringDelegate;
-(BOOL)shouldMigrateStoreAutomatically;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(BOOL)usesPersistentHistoryTracking;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(BOOL)shouldAddStoreAsynchronously;
-(void)setMirroringDelegate:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSDictionary *)options;
-(double)timeout;
-(void)setType:(NSString *)arg1 ;
-(void)setShouldMigrateStoreAutomatically:(BOOL)arg1 ;
-(BOOL)shouldInvokeCompletionHandlerConcurrently;
-(id)description;
-(NSString *)configuration;
-(void)setUsesPersistentHistoryTracking:(BOOL)arg1 ;
-(void)setCloudKitContainerOptions:(NSPersistentCloudKitContainerOptions *)arg1 ;
-(void)setShouldInvokeCompletionHandlerConcurrently:(BOOL)arg1 ;
-(void)setOption:(id)arg1 forMirroringKey:(id)arg2 ;
-(NSPersistentCloudKitContainerOptions *)cloudKitContainerOptions;
-(NSString *)type;
-(NSURL *)URL;
-(unsigned long long)hash;
-(NSDictionary *)sqlitePragmas;
-(void)setOption:(id)arg1 forKey:(id)arg2 ;
-(BOOL)shouldInferMappingModelAutomatically;
-(void)setShouldAddStoreAsynchronously:(BOOL)arg1 ;
-(id)mirroringOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id)arg1 forPragmaNamed:(id)arg2 ;
-(void)setShouldInferMappingModelAutomatically:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(NSString *)arg1 ;
@end

