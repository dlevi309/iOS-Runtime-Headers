/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <ScreenReaderCore/SCRCGestureFinger.h>

@interface SCRCGestureStylus : SCRCGestureFinger {

	double _altitude;
	double _azimuth;

}
-(double)altitude;
-(double)azimuth;
-(long long)type;
-(id)initWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5 ;
@end

