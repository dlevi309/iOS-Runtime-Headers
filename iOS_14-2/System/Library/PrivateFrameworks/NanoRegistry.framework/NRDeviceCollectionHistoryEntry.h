/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NRDeviceCollectionDiff * diff; 
@property (nonatomic,readonly) NRMutableDeviceCollection * state; 
@property (nonatomic,readonly) unsigned switchIndex; 
@property (nonatomic,readonly) NRPBDeviceCollectionHistoryEntry * protobuf; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)index;
-(unsigned)switchIndex;
-(NRDeviceCollectionDiff *)diff;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NRPBDeviceCollectionHistoryEntry *)protobuf;
-(id)initWithHistory:(id)arg1 index:(unsigned long long)arg2 date:(id)arg3 diff:(id)arg4 switchIndex:(unsigned)arg5 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NRMutableDeviceCollection *)state;
-(id)initWithProtobuf:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

