/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)object;
-(void)setSource:(DNDSModeAssertionSourceRecord *)arg1 ;
-(DNDSModeAssertionSourceRecord *)source;
-(NSNumber *)startDate;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(void)setStartDate:(NSNumber *)arg1 ;
-(DNDSModeAssertionDetailsRecord *)details;
-(void)setDetails:(DNDSModeAssertionDetailsRecord *)arg1 ;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
@end

