/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MRVirtualTouchDeviceDescriptor : NSObject <NSCopying, NSMutableCopying> {

	BOOL _absolute;
	BOOL _integratedDisplay;
	MRHIDSize _screenSize;

}

@property (getter=isAbsolute,nonatomic,readonly) BOOL absolute;                                //@synthesize absolute=_absolute - In the implementation block
@property (getter=isIntegratedDisplay,nonatomic,readonly) BOOL integratedDisplay;              //@synthesize integratedDisplay=_integratedDisplay - In the implementation block
@property (nonatomic,readonly) _MRHIDSize screenSize;                                          //@synthesize screenSize=_screenSize - In the implementation block
-(_MRHIDSize)screenSize;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isIntegratedDisplay;
-(BOOL)isAbsolute;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

