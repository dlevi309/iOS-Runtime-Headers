/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>

@class PBCodable, NSData, NTPBRecordBase, NSString;

@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding> {

	os_unfair_lock_s _recordLock;
	PBCodable* _record;
	NSData* _recordData;
	NTPBRecordBase* _recordBase;

}

@property (nonatomic,retain) NSData * recordData;                      //@synthesize recordData=_recordData - In the implementation block
@property (nonatomic,retain) NTPBRecordBase * recordBase;              //@synthesize recordBase=_recordBase - In the implementation block
@property (nonatomic,retain) PBCodable * record;                       //@synthesize record=_record - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s recordLock;              //@synthesize recordLock=_recordLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)keyValuePairType;
+(id)faultableRecordWithRecordData:(id)arg1 ;
+(id)faultableRecordWithRecord:(id)arg1 ;
+(id)readValueFromKeyValuePair:(id)arg1 ;
-(PBCodable *)record;
-(void)setRecordBase:(NTPBRecordBase *)arg1 ;
-(id)init;
-(void)writeToKeyValuePair:(id)arg1 ;
-(void)setRecordLock:(os_unfair_lock_s)arg1 ;
-(void)setRecord:(PBCodable *)arg1 ;
-(os_unfair_lock_s)recordLock;
-(void)setRecordData:(NSData *)arg1 ;
-(NSData *)recordData;
-(NTPBRecordBase *)recordBase;
@end

