/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NRDeviceCollectionDiff, NRDeviceCollectionHistory, NRMutableDeviceCollection, NRPBDeviceCollectionHistoryEntry;

@interface NRDeviceCollectionHistoryEntry : NSObject <NSSecureCoding, NSCopying> {

	unsigned _switchIndex;
	unsigned long long _index;
	NSDate* _date;
	NRDeviceCollectionDiff* _diff;
	NRDeviceCollectionHistory* _historyManager;

}

@property (assign,nonatomic,__weak) NRDeviceCollectionHistory * historyManager;              //@synthesize historyManager=_historyManager - In the implementation block
@property (assign,nonatomic) unsigned long long index;                                       //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NRDeviceCollectionDiff * diff;                                  //@synthesize diff=_diff - In the implementation block
@property (assign,nonatomic) unsigned switchIndex;                                           //@synthesize switchIndex=_switchIndex - In the implementation block
@property (nonatomic,readonly) NRMutableDeviceCollection * state; 
@property (nonatomic,readonly) NRPBDeviceCollectionHistoryEntry * protobuf; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(unsigned long long)index;
-(NRMutableDeviceCollection *)state;
-(void)setDate:(NSDate *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(NRPBDeviceCollectionHistoryEntry *)protobuf;
-(NRDeviceCollectionDiff *)diff;
-(id)initWithProtobuf:(id)arg1 ;
-(unsigned)switchIndex;
-(void)setSwitchIndex:(unsigned)arg1 ;
-(void)setDiff:(NRDeviceCollectionDiff *)arg1 ;
-(id)initWithHistory:(id)arg1 index:(unsigned long long)arg2 date:(id)arg3 diff:(id)arg4 switchIndex:(unsigned)arg5 ;
-(NRDeviceCollectionHistory *)historyManager;
-(void)setHistoryManager:(NRDeviceCollectionHistory *)arg1 ;
@end

