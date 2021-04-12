/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/HUColorWheelSpace.h>

@class NSString;

@interface HUTemperatureColorWheelSpace : NSObject <HUColorWheelSpace> {

	unsigned long long _mirroringBiasAxis;
	CGPoint _supportedRange;

}

@property (nonatomic,readonly) CGPoint supportedRange;                          //@synthesize supportedRange=_supportedRange - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic) unsigned long long mirroringBiasAxis;              //@synthesize mirroringBiasAxis=_mirroringBiasAxis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGPoint)defaultTemperatureRange;
+(CGPoint)largestAllowableTemperatureRange;
-(id)init;
-(unsigned long long)type;
-(UIEdgeInsets)colorForCoordinate:(CGPoint)arg1 ;
-(CGPoint)coordinateForColor:(UIEdgeInsets)arg1 isValid:(out BOOL*)arg2 ;
-(unsigned long long)mirroringBiasAxis;
-(void)setMirroringBiasAxis:(unsigned long long)arg1 ;
-(id)initWithSupportedRange:(CGPoint)arg1 ;
-(CGPoint)supportedRange;
@end

