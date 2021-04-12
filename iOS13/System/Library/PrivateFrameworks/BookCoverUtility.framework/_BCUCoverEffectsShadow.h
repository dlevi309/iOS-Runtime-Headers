/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/


#import <BookCoverUtility/BookCoverUtility-Structs.h>
@class NSString;

@interface _BCUCoverEffectsShadow : NSObject {

	CGImageRef _image;
	NSString* _blendMode;
	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) UIEdgeInsets insets;               //@synthesize insets=_insets - In the implementation block
@property (nonatomic,readonly) CGImageRef image;                  //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSString * blendMode;              //@synthesize blendMode=_blendMode - In the implementation block
-(CGSize)size;
-(CGImageRef)image;
-(UIEdgeInsets)insets;
-(CGRect)contentsCenter;
-(NSString *)blendMode;
-(id)initWithImage:(CGImageRef)arg1 insets:(UIEdgeInsets)arg2 blendMode:(id)arg3 ;
-(id)initWithImage:(CGImageRef)arg1 insets:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)roundedInsetsWithSize:(CGSize)arg1 ;
@end

