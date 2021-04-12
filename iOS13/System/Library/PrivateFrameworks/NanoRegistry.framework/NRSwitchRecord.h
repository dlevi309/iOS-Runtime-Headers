/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NRPBSwitchRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface NRSwitchRecord : NRPBSwitchRecord <NSSecureCoding>

@property (nonatomic,retain) NSUUID * activeDeviceID; 
@property (nonatomic,retain) NSDate * date; 
+(BOOL)supportsSecureCoding;
+(id)switchRecordWithHistoryEntry:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSUUID *)activeDeviceID;
-(void)setActiveDeviceID:(NSUUID *)arg1 ;
-(id)initWithDeviceID:(id)arg1 date:(id)arg2 switchIndex:(unsigned)arg3 ;
@end

