/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDictionary, CALayer;

@interface UITextMagnifierCommonRenderer : UIView {

	BOOL m_loaded;
	NSDictionary* m_images;
	NSDictionary* m_offsets;
	CALayer* m_back;
	CALayer* m_mask;
	CALayer* m_content;
	CALayer* m_front;
	BOOL _isRegisteredForGeometryChanges;

}
-(void)didMoveToSuperview;
-(void)_geometryChanged:(const SCD_Struct_UI29*)arg1 forAncestor:(id)arg2 ;
-(void)update;
-(id)magnifier;
-(void)loadImages;
-(id)visualsForMagnifier;
-(id)backgroundColourIfNecessary;
-(void)performOperations:(/*^block*/id)arg1 ;
@end

