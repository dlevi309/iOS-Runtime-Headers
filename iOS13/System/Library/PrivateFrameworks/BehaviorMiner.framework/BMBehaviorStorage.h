/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


#import <BehaviorMiner/BehaviorMiner-Structs.h>
@class NSURL, NSError, NSPersistentContainer, NSManagedObjectContext, BMManagedObjectConverter;

@interface BMBehaviorStorage : NSObject {

	os_unfair_lock_s _setupLock;
	BOOL _readOnly;
	NSURL* _URL;
	NSError* _setupError;
	NSPersistentContainer* _container;
	NSManagedObjectContext* _context;
	BMManagedObjectConverter* _converter;

}

@property (nonatomic,copy) NSError * setupError;                                //@synthesize setupError=_setupError - In the implementation block
@property (nonatomic,retain) NSPersistentContainer * container;                 //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) BMManagedObjectConverter * converter;              //@synthesize converter=_converter - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                         //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL readOnly;                                   //@synthesize readOnly=_readOnly - In the implementation block
+(id)defaultURL;
-(id)init;
-(NSPersistentContainer *)container;
-(void)setContainer:(NSPersistentContainer *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSManagedObjectContext *)context;
-(NSURL *)URL;
-(BMManagedObjectConverter *)converter;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(void)setupStorage;
-(BOOL)readOnly;
-(id)initWithURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)deleteAllWithError:(id*)arg1 ;
-(void)saveRules:(id)arg1 error:(id*)arg2 ;
-(id)fetchRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 limit:(unsigned long long)arg4 error:(id*)arg5 ;
-(NSError *)setupError;
-(void)setSetupError:(NSError *)arg1 ;
-(void)setConverter:(BMManagedObjectConverter *)arg1 ;
-(id)fetchRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 error:(id*)arg4 ;
@end

