/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>

@class SXViewport, SXImageView, SXComponentView, NSString;

@interface SXAnimatedImageController : NSObject <SXViewportChangeListener> {

	BOOL _isReceivingViewportChanges;
	SXViewport* _viewport;
	SXImageView* _imageView;
	double _previousYOffset;
	SXComponentView* _componentView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
@end

