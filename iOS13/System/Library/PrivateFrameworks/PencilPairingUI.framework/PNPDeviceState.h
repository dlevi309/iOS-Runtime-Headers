/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PNPDeviceState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _batteryLevelUnknown;
	NSString* _name;
	double _batteryLevel;
	unsigned long long _edge;
	unsigned long long _orientation;

}

@property (nonatomic,readonly) BOOL isLowPower; 
@property (nonatomic,readonly) BOOL isOnLeftOrRightSide; 
@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double batteryLevel;                         //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign,nonatomic) unsigned long long edge;                     //@synthesize edge=_edge - In the implementation block
@property (assign,nonatomic) unsigned long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL batteryLevelUnknown;                    //@synthesize batteryLevelUnknown=_batteryLevelUnknown - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)orientation;
-(void)setOrientation:(unsigned long long)arg1 ;
-(double)batteryLevel;
-(void)setEdge:(unsigned long long)arg1 ;
-(unsigned long long)edge;
-(void)setBatteryLevel:(double)arg1 ;
-(BOOL)isLowPower;
-(BOOL)batteryLevelUnknown;
-(void)setBatteryLevelUnknown:(BOOL)arg1 ;
-(BOOL)isOnLeftOrRightSide;
@end

