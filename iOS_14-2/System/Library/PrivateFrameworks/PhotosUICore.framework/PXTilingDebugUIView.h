/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXTilingDebugDelegate.h>

@class PXTilingControllerDebugInfo, NSString;

@interface PXTilingDebugUIView : UIView <PXTilingDebugDelegate> {

	double _debugWidth;
	PXTilingControllerDebugInfo* __debugInfo;

}

@property (setter=_setDebugInfo:,nonatomic,retain) PXTilingControllerDebugInfo * _debugInfo;              //@synthesize _debugInfo=__debugInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)drawRect:(CGRect)arg1 ;
-(void)tilingControllerDidUpdateDebugInfo:(id)arg1 ;
-(void)_setDebugInfo:(id)arg1 ;
-(PXTilingControllerDebugInfo *)_debugInfo;
@end

