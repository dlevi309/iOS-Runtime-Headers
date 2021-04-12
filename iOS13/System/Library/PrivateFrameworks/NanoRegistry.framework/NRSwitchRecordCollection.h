/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NRPBSwitchRecordCollection.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NRSwitchRecordCollection : NRPBSwitchRecordCollection <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addSwitchRecordWithHistoryEntry:(id)arg1 ;
-(void)truncateSwitchRecords;
-(id)deviceIDAtSwitchIndex:(unsigned)arg1 date:(id*)arg2 ;
-(id)initWithHistoryEntries:(id)arg1 ;
@end

