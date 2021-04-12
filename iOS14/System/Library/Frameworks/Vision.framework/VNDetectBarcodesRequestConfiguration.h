/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSArray, NSString;

@interface VNDetectBarcodesRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _stopAtFirstPyramidWith2DCode;
	NSArray* _symbologies;
	NSString* _locateMode;

}

@property (nonatomic,copy) NSArray * symbologies;                            //@synthesize symbologies=_symbologies - In the implementation block
@property (nonatomic,copy) NSString * locateMode;                            //@synthesize locateMode=_locateMode - In the implementation block
@property (assign,nonatomic) BOOL stopAtFirstPyramidWith2DCode;              //@synthesize stopAtFirstPyramidWith2DCode=_stopAtFirstPyramidWith2DCode - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setSymbologies:(NSArray *)arg1 ;
-(void)setLocateMode:(NSString *)arg1 ;
-(BOOL)stopAtFirstPyramidWith2DCode;
-(void)setStopAtFirstPyramidWith2DCode:(BOOL)arg1 ;
-(NSString *)locateMode;
-(NSArray *)symbologies;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

