/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <GameController/_GCHIDEventSubject.h>

@interface _GCHIDEventIOKitClient : _GCHIDEventSubject {

	IOHIDEventSystemClientRef _ioClient;

}
-(id)init;
-(id)initWithClient:(IOHIDEventSystemClientRef)arg1 queue:(id)arg2 ;
-(void)dealloc;
@end

