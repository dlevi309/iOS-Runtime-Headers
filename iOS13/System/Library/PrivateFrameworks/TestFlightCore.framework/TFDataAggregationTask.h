/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/


@class NSString, NSArray;

@interface TFDataAggregationTask : NSObject {

	/*^block*/id _loadDataBlock;
	/*^block*/id _extractValuesBlock;
	NSString* _name;
	NSString* _logKey;
	NSArray* _providedEntryIdentifiers;

}

@property (nonatomic,copy) id loadDataBlock;                                         //@synthesize loadDataBlock=_loadDataBlock - In the implementation block
@property (nonatomic,copy) id extractValuesBlock;                                    //@synthesize extractValuesBlock=_extractValuesBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * logKey;                               //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,copy,readonly) NSArray * providedEntryIdentifiers;              //@synthesize providedEntryIdentifiers=_providedEntryIdentifiers - In the implementation block
+(id)deviceInfoTask;
+(id)_readableRATStringFromCTRadioAccessTechnology:(id)arg1 ;
+(id)_readableNetworkConnectionTypStringFromNWPath:(id)arg1 ;
+(id)networkInfoTask;
+(id)sessionInfoTaskForIdentifier:(id)arg1 ;
+(id)watchInfoTask;
+(id)regionInfoTask;
+(id)snapshotTasksForSession:(id)arg1 ;
+(id)anytimeTasksForSession:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSString *)logKey;
-(id)initWithName:(id)arg1 providedEntryIdentifiers:(id)arg2 ;
-(void)setLoadDataBlock:(id)arg1 ;
-(void)setExtractValuesBlock:(id)arg1 ;
-(NSArray *)providedEntryIdentifiers;
-(void)extractDataPropertiesFromData:(id)arg1 intoDataContainer:(id)arg2 ;
-(void)loadDataOnQueue:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)loadDataBlock;
-(id)extractValuesBlock;
@end

