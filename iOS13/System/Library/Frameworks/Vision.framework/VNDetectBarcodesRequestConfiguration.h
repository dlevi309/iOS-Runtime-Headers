/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSArray, NSString;

@interface VNDetectBarcodesRequestConfiguration : VNImageBasedRequestConfiguration {

	NSArray* _symbologies;
	NSString* _locateMode;

}

@property (nonatomic,copy) NSArray * symbologies;              //@synthesize symbologies=_symbologies - In the implementation block
@property (nonatomic,copy) NSString * locateMode;              //@synthesize locateMode=_locateMode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(NSArray *)symbologies;
-(void)setSymbologies:(NSArray *)arg1 ;
-(NSString *)locateMode;
-(void)setLocateMode:(NSString *)arg1 ;
@end

