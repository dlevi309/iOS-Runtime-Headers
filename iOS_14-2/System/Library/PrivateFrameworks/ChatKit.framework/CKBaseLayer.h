/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <QuartzCore/CALayer.h>

@protocol CKLayerDelegate;
@interface CKBaseLayer : CALayer {

	id<CKLayerDelegate> _ckLayerDelegate;

}

@property (assign,nonatomic,__weak) id<CKLayerDelegate> ckLayerDelegate;              //@synthesize ckLayerDelegate=_ckLayerDelegate - In the implementation block
-(id<CKLayerDelegate>)ckLayerDelegate;
-(void)setCkLayerDelegate:(id<CKLayerDelegate>)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
@end

