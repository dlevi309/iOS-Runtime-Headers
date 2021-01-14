/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXGradientFactory.h>

@protocol SXGradientFactory <NSObject>
@required
-(id)gradientForColorStops:(id)arg1 angle:(double)arg2;

@end


@class NSString;

@interface SXGradientFactory : NSObject <SXGradientFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)locationsFromColorStops:(id)arg1 ;
-(id)colorsFromColorStops:(id)arg1 ;
-(id)gradientForColorStops:(id)arg1 angle:(double)arg2 ;
@end

