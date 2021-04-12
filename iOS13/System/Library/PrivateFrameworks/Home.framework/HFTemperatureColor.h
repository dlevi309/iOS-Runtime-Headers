/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/HFColorPrimitive.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HFTemperatureColor : NSObject <HFColorPrimitive, NSCopying> {

	float _temperatureInMired;

}

@property (nonatomic,readonly) float temperatureInMired;               //@synthesize temperatureInMired=_temperatureInMired - In the implementation block
@property (nonatomic,readonly) float temperatureInKelvin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)hf_RGBColorRepresentation;
-(id)hf_temperatureColorRepresentation;
-(id)initWithTemperatureInMired:(float)arg1 ;
-(id)initWithTemperatureInKelvin:(float)arg1 ;
-(float)temperatureInKelvin;
-(float)temperatureInMired;
@end

