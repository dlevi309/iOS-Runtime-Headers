/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface SSImageSurface : NSObject <BSXPCCoding> {

	IOSurfaceRef _backingSurface;
	double _scale;
	long long _orientation;

}

@property (assign,nonatomic) IOSurfaceRef backingSurface;              //@synthesize backingSurface=_backingSurface - In the implementation block
@property (assign,nonatomic) double scale;                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long orientation;                    //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)scale;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setScale:(double)arg1 ;
-(long long)orientation;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
-(IOSurfaceRef)backingSurface;
-(void)setBackingSurface:(IOSurfaceRef)arg1 ;
@end

