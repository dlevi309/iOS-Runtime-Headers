/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <libobjc.A.dylib/ISEffect.h>

@class NSString;

@interface ISBlurEffect : NSObject <ISEffect> {

	double _radius;

}

@property (assign) double radius;                                   //@synthesize radius=_radius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2 ;
-(id)initWithRadius:(double)arg1 ;
@end

