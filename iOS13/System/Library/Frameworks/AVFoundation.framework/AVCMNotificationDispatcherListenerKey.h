/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVWeakReference, NSString;

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying> {

	AVWeakReference* _weakReferenceToListener;
	/*function pointer*/void* _callback;
	NSString* _name;
	const void* _object;

}
+(id)listenerKeyWithWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(id)arg3 object:(const void*)arg4 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(id)arg3 object:(const void*)arg4 ;
@end

