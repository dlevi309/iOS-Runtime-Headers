/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPOrderedReplicaRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MSPPosition, MSPVectorTimestamp, NSData, NSString;

@interface MSPCollectionItemRecord : NSObject <MSPOrderedReplicaRecord, NSSecureCoding> {

	NSData* _contents;
	MSPVectorTimestamp* _contentsTimestamp;
	MSPPosition* _position;
	MSPVectorTimestamp* _positionTimestamp;

}

@property (nonatomic,copy) NSString * value; 
@property (nonatomic,readonly) MSPPosition * position;                                   //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) MSPVectorTimestamp * positionTimestamp;                   //@synthesize positionTimestamp=_positionTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSData * contents;                                   //@synthesize contents=_contents - In the implementation block
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp;              //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordWithContentsOfRecord:(id)arg1 ;
+(id)recordsByApplyingEdits:(id)arg1 toArbitraryRecords:(id)arg2 ;
+(id)tombstoneRecord;
-(NSData *)contents;
-(MSPPosition *)position;
-(id)init;
-(id)derivedRecordWithContents:(id)arg1 contentsTimestamp:(id)arg2 ;
-(MSPVectorTimestamp *)positionTimestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)description;
-(id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4 ;
-(id)derivedRecordWithPosition:(id)arg1 positionTimestamp:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(MSPVectorTimestamp *)contentsTimestamp;
-(NSString *)value;
-(id)initWithValue:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4 ;
@end

