/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <SPOwner/SPNearbyToken.h>
#import <SPOwner/SPConnectionMaterial.h>

@class NSData, NSDateInterval, NSNumber, SPBeaconingKey, NSString;

@interface SPCommandKey : NSObject <NSCopying, NSSecureCoding, SPNearbyToken, SPConnectionMaterial> {

	NSDateInterval* dateInterval;
	SPBeaconingKey* _beaconingKey;
	NSData* _connectionToken;
	NSData* _nearbyToken;
	long long _type;
	NSNumber* _primaryIndex;
	NSNumber* _secondaryIndex;
	NSData* _commandKey;

}

@property (nonatomic,copy) SPBeaconingKey * beaconingKey;                       //@synthesize beaconingKey=_beaconingKey - In the implementation block
@property (nonatomic,copy) NSData * commandKey;                                 //@synthesize commandKey=_commandKey - In the implementation block
@property (nonatomic,copy) NSData * connectionToken;                            //@synthesize connectionToken=_connectionToken - In the implementation block
@property (nonatomic,copy) NSData * nearbyToken;                                //@synthesize nearbyToken=_nearbyToken - In the implementation block
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSNumber * primaryIndex;                             //@synthesize primaryIndex=_primaryIndex - In the implementation block
@property (nonatomic,copy) NSNumber * secondaryIndex;                           //@synthesize secondaryIndex=_secondaryIndex - In the implementation block
@property (nonatomic,copy,readonly) NSData * address; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)description;
-(NSData *)commandKey;
-(NSData *)address;
-(SPBeaconingKey *)beaconingKey;
-(NSData *)connectionToken;
-(NSData *)nearbyToken;
-(NSNumber *)primaryIndex;
-(NSNumber *)secondaryIndex;
-(void)setBeaconingKey:(SPBeaconingKey *)arg1 ;
-(void)setConnectionToken:(NSData *)arg1 ;
-(void)setNearbyToken:(NSData *)arg1 ;
-(void)setPrimaryIndex:(NSNumber *)arg1 ;
-(id)initWithBeaconingKey:(id)arg1 commandKey:(id)arg2 connectionToken:(id)arg3 nearbyToken:(id)arg4 primaryIndex:(id)arg5 secondaryIndex:(id)arg6 type:(long long)arg7 ;
-(void)setSecondaryIndex:(NSNumber *)arg1 ;
-(void)setCommandKey:(NSData *)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

