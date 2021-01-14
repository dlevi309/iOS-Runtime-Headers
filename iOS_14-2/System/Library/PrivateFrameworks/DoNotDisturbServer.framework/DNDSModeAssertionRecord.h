/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModeAssertionStoreRecordDictionaryEncoding.h>

@class NSString, NSNumber, DNDSModeAssertionDetailsRecord, DNDSModeAssertionSourceRecord;

@interface DNDSModeAssertionRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {

	NSString* _UUID;
	NSNumber* _startDate;
	DNDSModeAssertionDetailsRecord* _details;
	DNDSModeAssertionSourceRecord* _source;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * UUID;                                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSNumber * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionDetailsRecord * details;              //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionSourceRecord * source;                //@synthesize source=_source - In the implementation block
+(id)recordForDictionary:(id)arg1 keys:(const SCD_Struct_DN9*)arg2 ;
+(id)recordForAssertion:(id)arg1 ;
-(void)setDetails:(DNDSModeAssertionDetailsRecord *)arg1 ;
-(NSString *)UUID;
-(void)setStartDate:(NSNumber *)arg1 ;
-(NSNumber *)startDate;
-(id)object;
-(void)setSource:(DNDSModeAssertionSourceRecord *)arg1 ;
-(DNDSModeAssertionDetailsRecord *)details;
-(void)setUUID:(NSString *)arg1 ;
-(DNDSModeAssertionSourceRecord *)source;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
@end

