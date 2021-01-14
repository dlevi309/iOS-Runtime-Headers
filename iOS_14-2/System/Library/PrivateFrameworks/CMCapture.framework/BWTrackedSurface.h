/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWTrackedSurface : NSObject {

	IOSurfaceRef _surface;
	/*^block*/id _handler;
	int _clientUseCount;
	BOOL _owningPixelBufferDeallocated;

}

@property (nonatomic,readonly) IOSurfaceRef surface;                         //@synthesize surface=_surface - In the implementation block
@property (nonatomic,readonly) id handler;                                   //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) int clientUseCount;                             //@synthesize clientUseCount=_clientUseCount - In the implementation block
@property (assign,nonatomic) BOOL owningPixelBufferDeallocated;              //@synthesize owningPixelBufferDeallocated=_owningPixelBufferDeallocated - In the implementation block
-(IOSurfaceRef)surface;
-(id)initWithSurface:(IOSurfaceRef)arg1 handler:(/*^block*/id)arg2 ;
-(int)clientUseCount;
-(void)setClientUseCount:(int)arg1 ;
-(BOOL)owningPixelBufferDeallocated;
-(void)setOwningPixelBufferDeallocated:(BOOL)arg1 ;
-(id)handler;
-(void)dealloc;
@end

