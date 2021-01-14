/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AccessoryServerControllerOperation.h>

@class NSIndexSet, HAP2ControllerReadRequest;

@interface HAP2AccessoryServerControllerReadOperation : HAP2AccessoryServerControllerOperation {

	NSIndexSet* _cachedCharacteristicIndices;
	HAP2ControllerReadRequest* _readRequest;

}
-(void)_cleanUp;
-(void)_sendRequest;
-(id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 readRequest:(id)arg5 endpoint:(id)arg6 mimeType:(id)arg7 timeout:(double)arg8 options:(unsigned long long)arg9 ;
@end

