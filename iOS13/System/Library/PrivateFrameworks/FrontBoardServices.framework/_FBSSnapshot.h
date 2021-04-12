/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class _FBSSnapshotContext, IOSurface, NSString;

@interface _FBSSnapshot : NSObject <BSInvalidatable> {

	_FBSSnapshotContext* _context;
	CGImageRef _imageRef;
	IOSurface* _nonProtectedSurfaceRef;
	IOSurface* _protectedSurfaceRef;

}

@property (nonatomic,copy,readonly) _FBSSnapshotContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (nonatomic,readonly) IOSurface * IOSurface; 
@property (nonatomic,readonly) IOSurface * fallbackIOSurface; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(_FBSSnapshotContext *)context;
-(double)_scale;
-(CGImageRef)CGImage;
-(IOSurface *)IOSurface;
-(void)_doInvalidate;
-(IOSurface *)fallbackIOSurface;
-(void)_synchronizedCaptureWithCompletion:(/*^block*/id)arg1 ;
-(CGSize)_scaledSnapshotSize;
-(id)initWithSnapshotContext:(id)arg1 ;
-(BOOL)hasProtectedContent;
-(BOOL)capture;
@end

