/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVFocusableTextView.h>

@class IKViewElement;

@interface _TVZoomableTextView : TVFocusableTextView {

	double _maxHeight;
	double _maxWidth;
	IKViewElement* _viewElement;
	CGSize _cachedSizeThatFits;
	CGSize _previousTargetSize;

}

@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (assign,nonatomic) CGSize cachedSizeThatFits;                //@synthesize cachedSizeThatFits=_cachedSizeThatFits - In the implementation block
@property (assign,nonatomic) CGSize previousTargetSize;                //@synthesize previousTargetSize=_previousTargetSize - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)_clearCachedValues;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)cachedSizeThatFits;
-(CGSize)previousTargetSize;
-(void)setCachedSizeThatFits:(CGSize)arg1 ;
-(void)setPreviousTargetSize:(CGSize)arg1 ;
@end

