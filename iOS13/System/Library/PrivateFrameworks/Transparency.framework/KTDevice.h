/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSMutableArray;

@interface KTDevice : NSObject <NSSecureCoding> {

	NSData* _deviceID;
	NSData* _deviceIDVRFOutput;
	NSMutableArray* _clientDatas;

}

@property (retain) NSData * deviceID;                         //@synthesize deviceID=_deviceID - In the implementation block
@property (retain) NSData * deviceIDVRFOutput;                //@synthesize deviceIDVRFOutput=_deviceIDVRFOutput - In the implementation block
@property (retain) NSMutableArray * clientDatas;              //@synthesize clientDatas=_clientDatas - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)deviceID;
-(void)setDeviceID:(NSData *)arg1 ;
-(NSData *)deviceIDVRFOutput;
-(NSMutableArray *)clientDatas;
-(id)initWithMutation:(id)arg1 ;
-(BOOL)updateWithMutation:(id)arg1 error:(id*)arg2 ;
-(void)setDeviceIDVRFOutput:(NSData *)arg1 ;
-(void)setClientDatas:(NSMutableArray *)arg1 ;
-(id)clientRecordForAppVersion:(unsigned long long)arg1 clientDataVRFOutput:(id)arg2 ;
-(void)markClientDatasForAppVersion:(unsigned long long)arg1 mutationMs:(unsigned long long)arg2 ;
-(void)addClientDatasObject:(id)arg1 ;
-(void)removeClientDatasObject:(id)arg1 ;
-(id)clientRecordsForVRFOutput:(id)arg1 ;
@end

