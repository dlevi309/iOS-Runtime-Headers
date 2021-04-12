/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSBagDataSourceProtocol;
@class ACAccount, NSString, NSArray;

@interface AMSBagValue : NSObject {

	ACAccount* _account;
	id<AMSBagDataSourceProtocol> _dataSource;
	NSString* _key;
	NSArray* _transformBlocks;
	unsigned long long _valueType;

}

@property (nonatomic,copy) ACAccount * account;                                           //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) id<AMSBagDataSourceProtocol> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSString * key;                                              //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSArray * transformBlocks;                                   //@synthesize transformBlocks=_transformBlocks - In the implementation block
@property (assign,nonatomic) unsigned long long valueType;                                //@synthesize valueType=_valueType - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
+(id)failingBagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3 ;
+(id)bagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 valuePromise:(id)arg3 ;
+(id)globalBagValueStorage;
+(BOOL)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2 ;
+(id)_valueFromDictionary:(id)arg1 forBagKey:(id)arg2 ;
+(id)frozenBagValueWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3 ;
-(unsigned long long)valueType;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)valueWithError:(id*)arg1 ;
-(id<AMSBagDataSourceProtocol>)dataSource;
-(void)setDataSource:(id<AMSBagDataSourceProtocol>)arg1 ;
-(NSString *)key;
-(id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 ;
-(id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 account:(id)arg4 ;
-(void)setValueType:(unsigned long long)arg1 ;
-(NSArray *)transformBlocks;
-(void)setTransformBlocks:(NSArray *)arg1 ;
-(id)_processedDefaultValue:(id)arg1 ;
-(void)_applyTransformsToValue:(id)arg1 index:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)valuePromise;
-(id)transformWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isLoaded;
-(void)setKey:(NSString *)arg1 ;
-(void)valueWithCompletion:(/*^block*/id)arg1 ;
@end

