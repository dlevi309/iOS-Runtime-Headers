/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/HUColorWheelSpace.h>

@class NSString;

@interface HUTemperatureColorWheelSpace : NSObject <HUColorWheelSpace> {

	unsigned long long _mirroringBiasAxis;
	CGSize _supportedRange;

}

@property (nonatomic,readonly) CGSize supportedRange;                           //@synthesize supportedRange=_supportedRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic) unsigned long long mirroringBiasAxis;              //@synthesize mirroringBiasAxis=_mirroringBiasAxis - In the implementation block
+(CGSize)defaultTemperatureRange;
+(CGSize)largestAllowableTemperatureRange;
-(id)init;
-(unsigned long long)type;
-(UIEdgeInsets)colorForCoordinate:(CGSize)arg1 ;
-(CGSize)coordinateForColor:(UIEdgeInsets)arg1 isValid:(out BOOL*)arg2 ;
-(unsigned long long)mirroringBiasAxis;
-(void)setMirroringBiasAxis:(unsigned long long)arg1 ;
-(id)initWithSupportedRange:(CGSize)arg1 ;
-(CGSize)supportedRange;
@end

