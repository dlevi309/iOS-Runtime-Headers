/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPOrderedReplicaRecord.h>

@class NSData, MSPVectorTimestamp, MSPPosition, NSString;

@interface MSPPinnedPlacesReplicaRecord : NSObject <MSPOrderedReplicaRecord> {

	NSData* _contents;
	MSPVectorTimestamp* _contentsTimestamp;
	MSPPosition* _position;
	MSPVectorTimestamp* _positionTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSData * contents;                                   //@synthesize contents=_contents - In the implementation block
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp;              //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
@property (nonatomic,readonly) MSPPosition * position;                                   //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) MSPVectorTimestamp * positionTimestamp;                   //@synthesize positionTimestamp=_positionTimestamp - In the implementation block
+(id)recordsByApplyingEdits:(id)arg1 toArbitraryRecords:(id)arg2 ;
+(id)recordWithContentsOfRecord:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSData *)contents;
-(MSPPosition *)position;
-(id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4 ;
-(MSPVectorTimestamp *)contentsTimestamp;
-(MSPVectorTimestamp *)positionTimestamp;
-(id)derivedRecordWithContents:(id)arg1 contentsTimestamp:(id)arg2 ;
-(id)derivedRecordWithPosition:(id)arg1 positionTimestamp:(id)arg2 ;
@end

