/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

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
-(void)update;
-(void)didMoveToSuperview;
-(void)_geometryChanges:(id)arg1 forAncestor:(id)arg2 ;
-(id)visualsForMagnifier;
-(id)magnifier;
-(void)loadImages;
-(id)backgroundColourIfNecessary;
-(void)performOperations:(/*^block*/id)arg1 ;
@end

