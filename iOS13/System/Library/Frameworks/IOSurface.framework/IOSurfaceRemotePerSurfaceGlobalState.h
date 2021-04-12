/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
*/


@protocol OS_xpc_object;
#import <IOSurface/IOSurface-Structs.h>
@class NSObject;

@interface IOSurfaceRemotePerSurfaceGlobalState : NSObject {

	os_unfair_lock_s _lock;
	unsigned _csid;
	void* _mapped_address;
	unsigned long long _mapped_size;
	NSObject*<OS_xpc_object> _extraData;

}
+(id)globalStateForSurface:(IOSurfaceClientRef)arg1 mappedAddress:(void*)arg2 mappedSize:(unsigned long long)arg3 extraData:(id)arg4 ;
-(void)dealloc;
-(id)initWithSurfaceID:(unsigned)arg1 mappedAddress:(void*)arg2 mappedSize:(unsigned long long)arg3 extraData:(id)arg4 ;
-(id)mergeExtraData:(id)arg1 ;
@end

