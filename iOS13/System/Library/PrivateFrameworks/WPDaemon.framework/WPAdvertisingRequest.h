/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary;

@interface WPAdvertisingRequest : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _clientType;
	BOOL _connectable;
	BOOL _stopOnAdvertisingAddressChange;
	NSData* _advertisingData;
	long long _advertisingRate;
	double _updateTime;
	NSDictionary* _advertisingOptions;
	long long _priorityValue;

}

@property (assign,nonatomic) unsigned char clientType;               //@synthesize clientType=_clientType - In the implementation block
@property (assign) long long priorityValue;                          //@synthesize priorityValue=_priorityValue - In the implementation block
@property (nonatomic,retain) NSData * advertisingData;               //@synthesize advertisingData=_advertisingData - In the implementation block
@property (assign) long long advertisingRate;                        //@synthesize advertisingRate=_advertisingRate - In the implementation block
@property (assign) double updateTime;                                //@synthesize updateTime=_updateTime - In the implementation block
@property (assign) BOOL connectable;                                 //@synthesize connectable=_connectable - In the implementation block
@property (retain) NSDictionary * advertisingOptions;                //@synthesize advertisingOptions=_advertisingOptions - In the implementation block
@property (assign) BOOL stopOnAdvertisingAddressChange;              //@synthesize stopOnAdvertisingAddressChange=_stopOnAdvertisingAddressChange - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestForClientType:(unsigned char)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)updateTime;
-(void)setUpdateTime:(double)arg1 ;
-(unsigned char)clientType;
-(void)setClientType:(unsigned char)arg1 ;
-(BOOL)connectable;
-(void)setConnectable:(BOOL)arg1 ;
-(void)setAdvertisingRate:(long long)arg1 ;
-(void)setAdvertisingData:(NSData *)arg1 ;
-(NSData *)advertisingData;
-(long long)advertisingRate;
-(long long)priorityValue;
-(void)setPriorityValue:(long long)arg1 ;
-(NSDictionary *)advertisingOptions;
-(void)setAdvertisingOptions:(NSDictionary *)arg1 ;
-(BOOL)stopOnAdvertisingAddressChange;
-(void)setStopOnAdvertisingAddressChange:(BOOL)arg1 ;
-(void)changePriorityValue:(long long)arg1 ;
@end

