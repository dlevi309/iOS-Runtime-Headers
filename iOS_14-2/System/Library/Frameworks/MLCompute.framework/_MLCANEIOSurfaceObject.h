/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


#import <MLCompute/MLCompute-Structs.h>
@class _ANEIOSurfaceObject, NSDictionary;

@interface _MLCANEIOSurfaceObject : NSObject {

	_ANEIOSurfaceObject* _ioSurfaceObject;
	NSDictionary* _liveIOStatus;

}

@property (nonatomic,retain,readonly) _ANEIOSurfaceObject * ioSurfaceObject;              //@synthesize ioSurfaceObject=_ioSurfaceObject - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * liveIOStatus;                        //@synthesize liveIOStatus=_liveIOStatus - In the implementation block
+(id)objectWithANEIOSurfaceObject:(id)arg1 liveIOStatus:(id)arg2 ;
+(IOSurfaceRef)createIOSurface1x1WithLength:(unsigned long long)arg1 ;
-(id)initWithIOSurface:(id)arg1 liveIOStatus:(id)arg2 ;
-(_ANEIOSurfaceObject *)ioSurfaceObject;
-(NSDictionary *)liveIOStatus;
@end

