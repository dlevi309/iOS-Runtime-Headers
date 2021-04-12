/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModeAssertionStoreRecordDictionaryEncoding.h>

@class DNDSModeAssertionRecord, NSNumber, DNDSModeAssertionInvalidationDetailsRecord, DNDSModeAssertionSourceRecord, NSString;

@interface DNDSModeAssertionInvalidationRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {

	DNDSModeAssertionRecord* _assertion;
	NSNumber* _invalidationDate;
	DNDSModeAssertionInvalidationDetailsRecord* _details;
	DNDSModeAssertionSourceRecord* _source;
	NSString* _reason;
	NSString* _reasonOverride;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) DNDSModeAssertionRecord * assertion;                               //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,retain) NSNumber * invalidationDate;                                       //@synthesize invalidationDate=_invalidationDate - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionInvalidationDetailsRecord * details;              //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionSourceRecord * source;                            //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * reason;                                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * reasonOverride;                                         //@synthesize reasonOverride=_reasonOverride - In the implementation block
+(id)recordForDictionary:(id)arg1 keys:(const SCD_Struct_DN9*)arg2 ;
+(id)recordForInvalidation:(id)arg1 ;
-(id)object;
-(void)setSource:(DNDSModeAssertionSourceRecord *)arg1 ;
-(NSString *)reason;
-(DNDSModeAssertionSourceRecord *)source;
-(DNDSModeAssertionRecord *)assertion;
-(void)setAssertion:(DNDSModeAssertionRecord *)arg1 ;
-(DNDSModeAssertionInvalidationDetailsRecord *)details;
-(void)setDetails:(DNDSModeAssertionInvalidationDetailsRecord *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(NSNumber *)invalidationDate;
-(NSString *)reasonOverride;
-(void)setInvalidationDate:(NSNumber *)arg1 ;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
-(void)setReasonOverride:(NSString *)arg1 ;
@end

