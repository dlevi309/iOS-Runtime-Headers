/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@class NSURL, NSDictionary, NSPersistentStoreDescription;

@interface AnalyticsStoreDescriptor : NSObject {

	unsigned long long _type;
	NSURL* _modelURL;
	NSURL* _storeURL;
	NSDictionary* _remoteStoreOptions;
	NSPersistentStoreDescription* _storeDescription;

}

@property (nonatomic,retain) NSURL * modelURL;                                               //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,retain) NSURL * storeURL;                                               //@synthesize storeURL=_storeURL - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * remoteStoreOptions;                            //@synthesize remoteStoreOptions=_remoteStoreOptions - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreDescription * storeDescription;              //@synthesize storeDescription=_storeDescription - In the implementation block
+(id)directStoreDescriptor;
+(id)defaultModelURL;
+(id)applicationSupportDirectoryPath;
+(id)defaultPersistentStoreURL;
+(id)serverStoreDescriptor;
-(void)setModelURL:(NSURL *)arg1 ;
-(NSURL *)modelURL;
-(NSURL *)storeURL;
-(void)setType:(unsigned long long)arg1 ;
-(NSDictionary *)remoteStoreOptions;
-(NSPersistentStoreDescription *)storeDescription;
-(unsigned long long)type;
-(void)setStoreURL:(NSURL *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 storeURL:(id)arg2 modelURL:(id)arg3 ;
@end

