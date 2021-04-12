/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasProtectedContent;
-(CGSize)_scaledSnapshotSize;
-(_FBSSnapshotContext *)context;
-(double)_scale;
-(BOOL)capture;
-(void)_synchronizedCaptureWithCompletion:(/*^block*/id)arg1 ;
-(IOSurface *)fallbackIOSurface;
-(id)initWithSnapshotContext:(id)arg1 ;
-(void)invalidate;
-(IOSurface *)IOSurface;
-(CGImageRef)CGImage;
-(void)_doInvalidate;
-(void)dealloc;
@end

