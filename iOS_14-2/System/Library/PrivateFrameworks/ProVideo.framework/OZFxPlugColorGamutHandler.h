/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PROAPIObject.h>
#import <libobjc.A.dylib/FxColorGamutAPI.h>

@class NSString;

@interface OZFxPlugColorGamutHandler : NSObject <PROAPIObject, FxColorGamutAPI> {

	OZFxPlugSharedBase* sharedBase;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)colorPrimaries;
-(id)initWithPlugin:(OZFxPlugSharedBase*)arg1 ;
-(id)colorMatrixFromDesiredRGBToYCbCrAtTime:(/*function pointer*/void**)arg1 ;
-(id)colorMatrixFromYCbCrToDesiredRGBAtTime:(/*function pointer*/void**)arg1 ;
-(id)pcFloat33MatrixToFxMatrix44:(const float*)arg1 ;
-(id)colorMatrixFromDesiredRGBToYCbCr;
-(id)colorMatrixFromYCbCrToDesiredRGB;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
@end

