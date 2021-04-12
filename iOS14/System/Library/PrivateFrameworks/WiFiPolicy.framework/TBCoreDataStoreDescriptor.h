/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@class NSURL, NSDictionary, NSPersistentStoreDescription;

@interface TBCoreDataStoreDescriptor : NSObject {

	unsigned long long _type;
	NSURL* _storeURL;
	NSURL* _modelURL;
	NSDictionary* _storeOptions;
	NSPersistentStoreDescription* _storeDescription;

}

@property (assign,nonatomic) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURL * storeURL;                                               //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSURL * modelURL;                                               //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,retain) NSDictionary * storeOptions;                                    //@synthesize storeOptions=_storeOptions - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreDescription * storeDescription;              //@synthesize storeDescription=_storeDescription - In the implementation block
+(id)directStoreDescriptor;
+(id)defaultModelURL;
+(id)serverStoreDescriptor;
+(id)defaultStoresDirectoryURL;
+(id)defaultPersistentStoreURLWithDirectory:(id)arg1 ;
+(id)tempStoresDirectoryURL;
+(id)clientStoreDescriptor;
+(id)tempStoreDescriptor;
-(void)setModelURL:(NSURL *)arg1 ;
-(NSURL *)modelURL;
-(NSDictionary *)storeOptions;
-(NSURL *)storeURL;
-(void)setType:(unsigned long long)arg1 ;
-(NSPersistentStoreDescription *)storeDescription;
-(unsigned long long)type;
-(void)setStoreURL:(NSURL *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 storeURL:(id)arg2 modelURL:(id)arg3 ;
-(void)setStoreOptions:(NSDictionary *)arg1 ;
@end

