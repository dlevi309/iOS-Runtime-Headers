/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FMDEraseOptions : NSObject <NSSecureCoding> {

	BOOL _useObliteration;
	BOOL _brickDevice;
	BOOL _hasBridgeCoProcessor;
	double _customDelay;
	double _maxDelayInterval;

}

@property (assign,nonatomic) BOOL useObliteration;                   //@synthesize useObliteration=_useObliteration - In the implementation block
@property (assign,nonatomic) BOOL brickDevice;                       //@synthesize brickDevice=_brickDevice - In the implementation block
@property (assign,nonatomic) double customDelay;                     //@synthesize customDelay=_customDelay - In the implementation block
@property (assign,nonatomic) double maxDelayInterval;                //@synthesize maxDelayInterval=_maxDelayInterval - In the implementation block
@property (assign,nonatomic) BOOL hasBridgeCoProcessor;              //@synthesize hasBridgeCoProcessor=_hasBridgeCoProcessor - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)useObliteration;
-(BOOL)brickDevice;
-(double)maxDelayInterval;
-(double)customDelay;
-(BOOL)hasBridgeCoProcessor;
-(void)setUseObliteration:(BOOL)arg1 ;
-(void)setBrickDevice:(BOOL)arg1 ;
-(void)setCustomDelay:(double)arg1 ;
-(void)setMaxDelayInterval:(double)arg1 ;
-(void)setHasBridgeCoProcessor:(BOOL)arg1 ;
@end

