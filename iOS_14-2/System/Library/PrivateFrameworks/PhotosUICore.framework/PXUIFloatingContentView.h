/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>
#import <libobjc.A.dylib/PXAdjustableContentsView.h>

@class NSString;

@interface PXUIFloatingContentView : _UIFloatingContentView <PXAdjustableContentsView> {

	CGRect _contentsRect;

}

@property (assign,nonatomic) CGRect contentsRect;                   //@synthesize contentsRect=_contentsRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGRect)contentsRect;
-(void)setContentsRect:(CGRect)arg1 ;
@end

