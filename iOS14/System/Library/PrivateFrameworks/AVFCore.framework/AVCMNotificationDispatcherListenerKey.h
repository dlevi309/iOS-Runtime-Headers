/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVWeakReference, NSString;

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying> {

	AVWeakReference* _weakReferenceToListener;
	/*function pointer*/void* _callback;
	NSString* _name;
	void* _object;

}
+(id)listenerKeyWithWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(id)arg3 object:(void*)arg4 ;
-(id)init;
-(id)initWithWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(id)arg3 object:(void*)arg4 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

