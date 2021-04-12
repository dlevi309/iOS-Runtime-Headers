/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FMDEraseOptions : NSObject <NSSecureCoding> {

	BOOL _useObliteration;
	BOOL _brickDevice;
	double _customDelay;
	double _maxDelayInterval;

}

@property (assign,nonatomic) BOOL useObliteration;                 //@synthesize useObliteration=_useObliteration - In the implementation block
@property (assign,nonatomic) BOOL brickDevice;                     //@synthesize brickDevice=_brickDevice - In the implementation block
@property (assign,nonatomic) double customDelay;                   //@synthesize customDelay=_customDelay - In the implementation block
@property (assign,nonatomic) double maxDelayInterval;              //@synthesize maxDelayInterval=_maxDelayInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)useObliteration;
-(BOOL)brickDevice;
-(double)maxDelayInterval;
-(double)customDelay;
-(void)setUseObliteration:(BOOL)arg1 ;
-(void)setBrickDevice:(BOOL)arg1 ;
-(void)setCustomDelay:(double)arg1 ;
-(void)setMaxDelayInterval:(double)arg1 ;
@end

