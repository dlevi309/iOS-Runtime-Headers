/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)gradientForColorStops:(id)arg1 angle:(double)arg2 ;
-(id)colorsFromColorStops:(id)arg1 ;
-(id)locationsFromColorStops:(id)arg1 ;
@end

