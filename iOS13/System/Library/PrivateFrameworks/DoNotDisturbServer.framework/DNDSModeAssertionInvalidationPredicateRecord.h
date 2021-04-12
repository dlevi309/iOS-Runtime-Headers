/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModeAssertionStoreRecordDictionaryEncoding.h>

@class NSString, NSNumber, NSArray;

@interface DNDSModeAssertionInvalidationPredicateRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {

	NSString* _predicateType;
	NSNumber* _date;
	NSArray* _clientIdentifiers;
	NSArray* _UUIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * predicateType;                 //@synthesize predicateType=_predicateType - In the implementation block
@property (nonatomic,retain) NSNumber * date;                          //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSArray * clientIdentifiers;              //@synthesize clientIdentifiers=_clientIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * UUIDs;                          //@synthesize UUIDs=_UUIDs - In the implementation block
+(id)recordForDictionary:(id)arg1 keys:(const SCD_Struct_DN9*)arg2 ;
+(id)recordForInvalidationPredicate:(id)arg1 ;
-(id)object;
-(NSNumber *)date;
-(void)setDate:(NSNumber *)arg1 ;
-(NSArray *)UUIDs;
-(NSString *)predicateType;
-(NSArray *)clientIdentifiers;
-(void)setClientIdentifiers:(NSArray *)arg1 ;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
-(void)setPredicateType:(NSString *)arg1 ;
-(void)setUUIDs:(NSArray *)arg1 ;
@end

