/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)object;
-(void)setSource:(DNDSModeAssertionSourceRecord *)arg1 ;
-(NSString *)reason;
-(DNDSModeAssertionSourceRecord *)source;
-(void)setPredicate:(DNDSModeAssertionInvalidationPredicateRecord *)arg1 ;
-(DNDSModeAssertionInvalidationPredicateRecord *)predicate;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(DNDSModeAssertionInvalidationDetailsRecord *)details;
-(void)setDetails:(DNDSModeAssertionInvalidationDetailsRecord *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)reasonOverride;
-(NSNumber *)requestDate;
-(void)setRequestDate:(NSNumber *)arg1 ;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
-(void)setReasonOverride:(NSString *)arg1 ;
@end

