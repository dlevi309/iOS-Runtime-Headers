/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableArray;

@interface TXRDeferredElementInfo : NSObject {

	NSObject*<OS_dispatch_semaphore> _infoLoaded;
	NSMutableArray* _faces;

}

@property (nonatomic,readonly) NSMutableArray * faces;              //@synthesize faces=_faces - In the implementation block
-(NSMutableArray *)faces;
-(id)initAsCubemap:(BOOL)arg1 ;
@end

