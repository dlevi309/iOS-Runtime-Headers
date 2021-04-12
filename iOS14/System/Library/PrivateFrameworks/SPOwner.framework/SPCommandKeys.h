/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <SPOwner/SPNearbyToken.h>
#import <SPOwner/SPConnectionToken.h>

@class NSData, NSDateInterval, SPBeaconingKey, NSString;

@interface SPCommandKeys : NSObject <NSCopying, NSSecureCoding, SPNearbyToken, SPConnectionToken> {

	SPBeaconingKey* _beaconingKey;
	NSData* _commandKey;
	NSData* _connectionToken;
	NSData* _nearbyToken;

}

@property (nonatomic,copy) SPBeaconingKey * beaconingKey;                       //@synthesize beaconingKey=_beaconingKey - In the implementation block
@property (nonatomic,copy) NSData * commandKey;                                 //@synthesize commandKey=_commandKey - In the implementation block
@property (nonatomic,copy) NSData * connectionToken;                            //@synthesize connectionToken=_connectionToken - In the implementation block
@property (nonatomic,copy) NSData * nearbyToken;                                //@synthesize nearbyToken=_nearbyToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * address; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSData *)commandKey;
-(NSData *)address;
-(SPBeaconingKey *)beaconingKey;
-(NSData *)connectionToken;
-(NSData *)nearbyToken;
-(void)setBeaconingKey:(SPBeaconingKey *)arg1 ;
-(void)setConnectionToken:(NSData *)arg1 ;
-(void)setNearbyToken:(NSData *)arg1 ;
-(void)setCommandKey:(NSData *)arg1 ;
-(id)initWithBeaconingKey:(id)arg1 commandKey:(id)arg2 connectionToken:(id)arg3 nearbyToken:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

