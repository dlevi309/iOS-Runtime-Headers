/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <libobjc.A.dylib/VNMTLDeviceWisdomParametersProviding.h>

@class NSString;

@interface VNMTLDeviceWisdomParameters : NSObject <VNMTLDeviceWisdomParametersProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_wisdomResourcesPath;
-(id)wisdomParameterForMTLDeviceWithName:(id)arg1 error:(id*)arg2 ;
-(id)wisdomParameterForMTLDevice:(id)arg1 error:(id*)arg2 ;
-(void)_flushMetalDeviceWisdomParametersCache;
-(id)_cachedMetalDeviceWisdomParametersAndReturnError:(id*)arg1 ;
@end

