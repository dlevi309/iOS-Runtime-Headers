/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor;

@interface _UIImageContentLayout : NSObject {

	SCD_Struct_UI62 _flags;
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
@property (nonatomic,readonly) double baselineOffsetFromBottom;                  //@synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom - In the implementation block
+(id)layoutForSource:(id)arg1 inTarget:(id)arg2 withSize:(CGSize)arg3 ;
-(id)contents;
-(double)baselineOffsetFromBottom;
-(UIEdgeInsets)contentInsets;
-(id)description;
-(UIColor *)contentsMultiplyColor;
-(CGAffineTransform)contentsTransform;
-(double)contentsScaleFactor;
-(BOOL)hasContents;
@end

