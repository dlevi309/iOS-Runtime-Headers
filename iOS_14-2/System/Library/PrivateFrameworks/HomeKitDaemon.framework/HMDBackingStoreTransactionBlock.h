/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDBackingStoreTransactionOptions, HMDBackingStore, NSMutableArray, NSString;

@interface HMDBackingStoreTransactionBlock : HMFObject <HMFLogging> {

	BOOL _committed;
	HMDBackingStoreTransactionOptions* _options;
	HMDBackingStore* _backingStore;
	NSMutableArray* _objects;

}

@property (assign,nonatomic,__weak) HMDBackingStore * backingStore;                      //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;                                   //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) BOOL committed;                                             //@synthesize committed=_committed - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreTransactionOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)sort:(id)arg1 ;
-(NSMutableArray *)objects;
-(void)save:(/*^block*/id)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(id)debugString:(BOOL)arg1 ;
-(void)setCommitted:(BOOL)arg1 ;
-(void)run;
-(BOOL)committed;
-(void)save;
-(HMDBackingStore *)backingStore;
-(void)addObjects:(id)arg1 ;
-(HMDBackingStoreTransactionOptions *)options;
-(id)logIdentifier;
-(NSString *)description;
-(void)setBackingStore:(HMDBackingStore *)arg1 ;
-(void)run:(/*^block*/id)arg1 ;
-(void)add:(id)arg1 ;
-(void)dumpDebug:(id)arg1 ;
-(void)dumpDebug;
-(void)add:(id)arg1 withMessage:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 options:(id)arg2 label:(id)arg3 ;
-(void)runWithoutSave:(/*^block*/id)arg1 ;
@end

