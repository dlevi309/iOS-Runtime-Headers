/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol CAMPanoramaCaptureRequestDelegate;
@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {

	id<CAMPanoramaCaptureRequestDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<CAMPanoramaCaptureRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id<CAMPanoramaCaptureRequestDelegate>)delegate;
-(id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2 ;
@end

