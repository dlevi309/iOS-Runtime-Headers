/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModeAssertionStoreRecordDictionaryEncoding.h>

@class NSString, DNDSModeAssertionInvalidationPredicateRecord, NSNumber, DNDSModeAssertionInvalidationDetailsRecord, DNDSModeAssertionSourceRecord;

@interface DNDSModeAssertionInvalidationRequestRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {

	NSString* _UUID;
	DNDSModeAssertionInvalidationPredicateRecord* _predicate;
	NSNumber* _requestDate;
	DNDSModeAssertionInvalidationDetailsRecord* _details;
	DNDSModeAssertionSourceRecord* _source;
	NSString* _reason;
	NSString* _reasonOverride;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * UUID;                                                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionInvalidationPredicateRecord * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSNumber * requestDate;                                                //@synthesize requestDate=_requestDate - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionInvalidationDetailsRecord * details;                  //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionSourceRecord * source;                                //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * reason;                                                     //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * reasonOverride;                                             //@synthesize reasonOverride=_reasonOverride - In the implementation block
+(id)recordForDictionary:(id)arg1 keys:(const SCD_Struct_DN9*)arg2 ;
+(id)recordForInvalidationRequest:(id)arg1 ;
-(void)setDetails:(DNDSModeAssertionInvalidationDetailsRecord *)arg1 ;
-(NSString *)UUID;
-(DNDSModeAssertionInvalidationPredicateRecord *)predicate;
-(void)setPredicate:(DNDSModeAssertionInvalidationPredicateRecord *)arg1 ;
-(void)setRequestDate:(NSNumber *)arg1 ;
-(id)object;
-(void)setSource:(DNDSModeAssertionSourceRecord *)arg1 ;
-(NSString *)reason;
-(DNDSModeAssertionInvalidationDetailsRecord *)details;
-(void)setUUID:(NSString *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(NSNumber *)requestDate;
-(DNDSModeAssertionSourceRecord *)source;
-(NSString *)reasonOverride;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
-(void)setReasonOverride:(NSString *)arg1 ;
@end

