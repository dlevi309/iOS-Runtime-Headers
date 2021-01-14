/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _CLRangingPeer, NSDate, NSNumber;

@interface _CLRangingPeerDistanceInternal : NSObject <NSCopying> {

	_CLRangingPeer* _peer;
	NSDate* _date;
	NSNumber* _distanceMeters;
	NSNumber* _accuracyMeters;
	BOOL _initiator;
	BOOL _shouldUnlock;

}
-(id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(BOOL)arg5 shouldUnlock:(BOOL)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

