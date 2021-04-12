/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(double)scale;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(IOSurfaceRef)backingSurface;
-(void)setBackingSurface:(IOSurfaceRef)arg1 ;
@end

