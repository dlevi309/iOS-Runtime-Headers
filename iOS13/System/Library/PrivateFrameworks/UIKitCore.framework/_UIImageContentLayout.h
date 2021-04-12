/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor;

@interface _UIImageContentLayout : NSObject {

	SCD_Struct_UI78 _flags;
	id _contents;
	UIColor* _contentsMultiplyColor;
	double _contentsScaleFactor;
	double _baselineOffsetFromTop;
	double _baselineOffsetFromBottom;
	UIEdgeInsets _contentInsets;
	CGAffineTransform _contentsTransform;

}

@property (nonatomic,readonly) CGAffineTransform contentsTransform;              //@synthesize contentsTransform=_contentsTransform - In the implementation block
@property (nonatomic,readonly) double contentsScaleFactor;                       //@synthesize contentsScaleFactor=_contentsScaleFactor - In the implementation block
@property (nonatomic,readonly) id contents; 
@property (nonatomic,readonly) UIEdgeInsets contentInsets;                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) UIColor * contentsMultiplyColor; 
@property (nonatomic,readonly) double baselineOffsetFromTop;                     //@synthesize baselineOffsetFromTop=_baselineOffsetFromTop - In the implementation block
@property (nonatomic,readonly) double baselineOffsetFromBottom;                  //@synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom - In the implementation block
+(id)layoutForSource:(id)arg1 inTarget:(id)arg2 withSize:(CGSize)arg3 ;
-(id)description;
-(id)contents;
-(double)baselineOffsetFromBottom;
-(UIEdgeInsets)contentInsets;
-(CGAffineTransform)contentsTransform;
-(double)baselineOffsetFromTop;
-(BOOL)hasContents;
-(UIColor *)contentsMultiplyColor;
-(BOOL)hasCGImageContents;
-(CGImageRef)CGImageContents;
-(id)initWithSource:(id)arg1 target:(id)arg2 withSize:(CGSize)arg3 ;
-(void)_prepareContentOfSize:(CGSize)arg1 source:(id)arg2 target:(id)arg3 ;
-(void)_materializeContentsIfNeeded;
-(BOOL)rendersContentsAtNaturalSize;
-(double)contentsScaleFactor;
@end

