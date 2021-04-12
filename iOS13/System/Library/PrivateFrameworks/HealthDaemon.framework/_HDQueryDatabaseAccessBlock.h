/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDQueryServer, NSString;

@interface _HDQueryDatabaseAccessBlock : NSObject {

	/*^block*/id _block;
	HDQueryServer* _queryServer;
	NSString* _processBundleIdentifier;
	long long _qualityOfService;
	double _creationTime;

}

@property (nonatomic,copy,readonly) id block;                                        //@synthesize block=_block - In the implementation block
@property (nonatomic,__weak,readonly) HDQueryServer * queryServer;                   //@synthesize queryServer=_queryServer - In the implementation block
@property (nonatomic,copy,readonly) NSString * processBundleIdentifier;              //@synthesize processBundleIdentifier=_processBundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long qualityOfService;                           //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) double creationTime;                                  //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,readonly) BOOL shouldThrottle; 
-(id)description;
-(long long)qualityOfService;
-(id)block;
-(double)creationTime;
-(BOOL)shouldThrottle;
-(NSString *)processBundleIdentifier;
-(id)initWithBlock:(/*^block*/id)arg1 queryServer:(id)arg2 ;
-(HDQueryServer *)queryServer;
-(BOOL)shouldRunAfterBlock:(id)arg1 foregroundBundleIdentifiers:(id)arg2 ;
@end

